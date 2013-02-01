// Edited by Vikram: Edit 3//
// Edited by Vikram: Edit 4//


#include "main.h"
#include "timer.h"
#include "motor.h"
#include "io.h"


int main( void )
{	

	// Motor Control Block 
	extern _MotorControlBlock MCB;

	// Disable the Dog: Disabled to test a finction 
	WDTCTL = WDTPW + WDTHOLD;  

	// Initialize IO Ports(Port 2.2 is used to detect interrupt on the pin)
	IO_InitializePort2();

	// Initialize IO Ports (Mostly Used as Input Ports)
	IO_InitializePort4();

	// Initialize IO Ports (Mostly Used as Output Ports)
	IO_InitializePort8();

	// Initialize the Timer for Motor Operation
	// TMR_InitTimerB();

	// Initialize the Motor Control Block
	MCB_Init();

	// Enable Global Interrupt
	_EINT();

	// Turn OFF Motor
	MotorPowerSwitch(OFF);

	// Set Motor To Rest
	MCB.Commands.DIRECTION = REST;


// I also added this line for fun
	
	while(1)
		{
			if (MCB.Control.ACTION == ARM_AWAKE)
				{
					MCB_TurnOffSwitchAndReturn();
				}
			else
				{
					// Set Low Power Mode with Interrupts Active
					//__bis_SR_register(LPM2_bits + GIE);       // Enter LPM0, enable interrupts
                    //__no_operation();                                  // For debugger  
				}
		}
 }

















