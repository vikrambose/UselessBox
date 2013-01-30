#include "main.h"
#include "timer.h"
#include "io.h"





/**********************************************************************//**
 * @brief  Initialize Timer B CCR0 for .65ms HIGHEST priority interrupt
 *         
 * @param  none
 * 
 * @return none
 *************************************************************************/   
void TMR_InitTimerB(void)
{
   TBCCTL0 = CCIE;                  // CCR0 interrupt enabled
   TBCCR0 = 1005;  
   TBCTL = TBSSEL_2 + MC_1 + TBCLR; // ACLK(32khz), upmode, clear TAR
}





/**********************************************************************//**
 * @brief  Disarm the Interrupt
 *         
 * @param  none
 * 
 * @return none
 *************************************************************************/   
void TMR_InitTimerB_Disarm(void)
{
	// Disarm that timer
	TBCTL = MC_0;
}




