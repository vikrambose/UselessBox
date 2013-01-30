#ifndef _MAIN
#define _MAIN

#include "msp430x54x.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Current Firmware Version
#define CURRENT_FIRMWARE_REV "r505"

// LED Test Pattern to turn all segments on
#define TEST_PATTERN "@@@@"

#define GIE_ON  1
#define GIE_OFF 0
#define TRUE    1
#define FALSE   0
#define ADC_4MA__COUNTS__IDEAL  0x0DD0
#define ADC_4MA__COUNTS__TOLERANCE 	0x200
#define CONTROL_LOOP_ADC_COUNTS__IDEAL 		0x193
#define CONTROL_LOOP_ADC_COUNTS__TOLERANCE	0x75
#define MS_DELAY20  22000   
#define MS_DELAY1_7 1810
#define MS_DELAY1_3 1400
#define MS_DELAY1_5 1600

// Data Type for display Mode
typedef enum
{
   fl_mode=0,
   al_mode
} led_mode_t;

// Primitive Types (Coded for Protability)

// char: Set Compiler option to use char as unisgned char
typedef char uint8_t;  
typedef signed char sint8_t;
typedef unsigned int  uint16_t;
typedef signed int  sint16_t;
typedef unsigned long uint32_t;
typedef signed long sint32_t;
typedef float floatIEEE32;
// double: Set Compiler option to make double 64bit
typedef long double floatIEEE64;



void RUN_RunModeTask(void);
void INIT_DisplayRev(void);
void TEST_FlashTest(void);
void TEST_LEDBank(void);


#endif
