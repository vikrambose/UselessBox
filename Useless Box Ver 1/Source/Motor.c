#include "main.h"
#include "io.h"
#include "timer.h"
#include "motor.h"




// Motor Control Block Variable
_MotorControlBlock MCB;









/**********************************************************************//**
 * @brief   
 *         
 * @param  none
 * 
 * @return none
 *************************************************************************/ 

void MCB_TurnOffSwitchAndReturn(void)
{
	extern _MotorControlBlock MCB;
	extern uint8_t port2_pin_2_MASK;
	uint8_t escape = 1;
	


	// Green Wire ON: Arm Rushes to Turn Off Switch
	while((P4IN & 0x10)== 0x10)
		{
			// Turn Motor ON
			MotorPowerSwitch(ON);
		
			// Motor direction to ANTI-CLOCKWISE
			MCB.Commands.DIRECTION = ANTI_CLOCKWISE;	

			// Make sure it goes into next while loop
			escape = 0;
		}

	// Red Wire ON: Arm has succeeded now its time to return home
	while(((P4IN & 0x08) == 0x08) && (escape == 0))
		{
			// Motor Direction to CLOCKWISE
			MCB.Commands.DIRECTION = CLOCKWISE;

			// Check if End has been reached
			if ((P4IN & 0x20) == 0x20)
				{
					// Set Motor To Rest
					MCB.Commands.DIRECTION = REST;
								
					// Make Port 2 Interupt Enabled
					p2_io_Interrupt |= ~port2_pin_2_MASK;

					// Kill Power to the Motor
					MotorPowerSwitch(OFF);

					// Disarm the Timer Interrupt
					TMR_InitTimerB_Disarm();

					// Put Arm to Sleep
					MCB.Control.ACTION = ARM_SLEEP;
					
					// End While Loop
					escape = 1;
				}	
		}

	
}










/**********************************************************************//**
 * @brief   
 *         
 * @param  none
 * 
 * @return none
 *************************************************************************/

void MotorPowerSwitch(uint8_t State)
{
	extern _MotorControlBlock MCB;


	// Update Motor State
	MCB.Control.STATE = State;


	// Update Power to Motor
	if (MCB.Control.STATE == ON)
		{
			IO_SetPort(PORT8, Pin0, HIGH);
		}
	else
		{
			IO_SetPort(PORT8, Pin0, LOW);
		}
}




/**********************************************************************//**
 * @brief   
 *         
 * @param  none
 * 
 * @return none
 *************************************************************************/

void MCB_Init(void)
{
	extern _MotorControlBlock MCB;

	MCB.Control.TURN = 0;
	MCB.Control.COUNT = 0;
	MCB.Control.STATE = OFF;
	MCB.Commands.DIRECTION = CLOCKWISE;
	MCB.Control.ACTION = ARM_SLEEP;
}






/**********************************************************************//**
 * @brief   
 *         
 * @param  none
 * 
 * @return none
 *************************************************************************/

#pragma vector=PORT2_VECTOR
__interrupt void Port_2(void)
{
  extern uint8_t port2_pin_2_MASK;

  // Clear IFG
  p2_io_IntClr &= port2_pin_2_MASK;

  // Wake Up The ARM
  MCB.Control.ACTION = ARM_AWAKE;

  // Turn on the timer B
  TMR_InitTimerB(); 
  
}






/**********************************************************************//**
 * @brief   
 *         
 * @param  none
 * 
 * @return none
 *************************************************************************/

#pragma vector=TIMER0_B0_VECTOR
__interrupt void TIMER0_B0_ISR(void)
{
	extern _MotorControlBlock MCB;

	if (MCB.Commands.DIRECTION == ANTI_CLOCKWISE)
		{
			// Frist Time In: Set IO Pin to High 
			if (MCB.Control.COUNT == 0)
				{
					// Reset Timer Interrupt for 1.7mS
					TBCCR0 = MS_DELAY1_7;

					// Advance COUNT 
					MCB.Control.COUNT ++;

					// Set IO Pin High
					IO_SetPort(PORT4, Pin1, HIGH);
				}
			else
				{
					// Reset Timer for 20mS
					TBCCR0 =  MS_DELAY20;
					
					// Set IO Pin Low
					IO_SetPort(PORT4, Pin1, LOW);
									
					// Reset COUNT
					MCB.Control.COUNT = 0;
				}
			
		}
	else if (MCB.Commands.DIRECTION == CLOCKWISE)
		{
			// Frist Time In: Set IO Pin to High 
			if (MCB.Control.COUNT == 0)
				{
					// Reset Timer Interrupt for 1.3mS
					TBCCR0 = MS_DELAY1_3;
			
					// Advance COUNT 
					MCB.Control.COUNT ++;
			
					// Set IO Pin High
					IO_SetPort(PORT4, Pin1, HIGH);
				}
			else
				{
					// Reset Timer for 20mS
					TBCCR0 = MS_DELAY20;
					
					// Set IO Pin Low
					IO_SetPort(PORT4, Pin1, LOW);
									
					// Reset COUNT
					MCB.Control.COUNT = 0;
				}

		}
	else if (MCB.Commands.DIRECTION == REST)
		{
			// Frist Time In: Set IO Pin to High 
			if (MCB.Control.COUNT == 0)
				{
					// Reset Timer Interrupt for 1.5mS
					TBCCR0 = MS_DELAY1_5;
			
					// Advance COUNT 
					MCB.Control.COUNT ++;
			
					// Set IO Pin High
					IO_SetPort(PORT4, Pin1, HIGH);
				}
			else
				{
					// Reset Timer for 20mS
					TBCCR0 = MS_DELAY20;
					
					// Set IO Pin Low
					IO_SetPort(PORT4, Pin1, LOW);
									
					// Reset COUNT
					MCB.Control.COUNT = 0;
				}
		}
			
}









