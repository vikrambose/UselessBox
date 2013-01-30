// -----------------------------------------------------------------------------// 
// Data structures and pre-processor directives used to drive a software I2c Port	      
// Author: Vikram A Bose-Mullick														
// Data: 9th September 2010																
// -----------------------------------------------------------------------------//


// IO Port Driver
#define PORT1  1
#define PORT2  2
#define PORT3  3
#define PORT4  4
#define PORT5  5
#define PORT6  6
#define PORT7  7
#define PORT8  8
#define PORT9  9
#define PORT10 10
#define HIGH   1
#define LOW    0
#define Pin0   0
#define Pin1   1
#define Pin2   2
#define Pin3   3
#define Pin4   4
#define Pin5   5
#define Pin6   6
#define Pin7   7



// Data Port Address for PORT1
#define	p1_io_port_out	    P1OUT		// Output Latch Register
#define p1_io_port_in		P1IN		// Input Latch Register
#define p1_io_port_dir	 	P1DIR		// Port Direction Register
#define p1_io_port_setup	P1SEL		// Port Function Select Register
#define p1_io_port_pullup 	P1REN		// Port Function Internal Pull up 
#define p1_io_Interrupt	    P1IE		// Port Interrupt (Enable)
#define p1_io_IntEdge       P1IES       // Port Interrupt Edge (Hi/Lo)
#define p1_io_IntClr		P1IFG       // Port Interrupt IFG Cleared

// Data Port Address for PORT2
#define	p2_io_port_out	    P2OUT		// Output Latch Register
#define p2_io_port_in		P2IN		// Input Latch Register
#define p2_io_port_dir	 	P2DIR		// Port Direction Register
#define p2_io_port_setup	P2SEL		// Port Function Select Register
#define p2_io_port_pullup 	P2REN		// Port Function Internal Pull up 
#define p2_io_Interrupt	    P2IE		// Port Interrupt (Enable)
#define p2_io_IntEdge       P2IES       // Port Interrupt Edge (Hi/Lo)
#define p2_io_IntClr		P2IFG       // Port Interrupt IFG Cleared




// Data Port Address for PORT3
#define	p3_io_port_out	    P3OUT		// Output Latch Register
#define p3_io_port_in		P3IN		// Input Latch Register
#define p3_io_port_dir	 	P3DIR		// Port Direction Register
#define p3_io_port_setup	P3SEL		// Port Function Select Register
#define p3_io_port_pullup 	P3REN		// Port Function Internal Pull up 

// Data Port Address for PORT4
#define	p4_io_port_out	    P4OUT		// Output Latch Register
#define p4_io_port_in		P4IN		// Input Latch Register
#define p4_io_port_dir	 	P4DIR		// Port Direction Register
#define p4_io_port_setup	P4SEL		// Port Function Select Register
#define p4_io_port_pullup 	P4REN		// Port Function Internal Pull up 

// Data Port Address for PORT5
#define	p5_io_port_out	    P5OUT		// Output Latch Register
#define p5_io_port_in		P5IN		// Input Latch Register
#define p5_io_port_dir	 	P5DIR		// Port Direction Register
#define p5_io_port_setup	P5SEL		// Port Function Select Register
#define p5_io_port_pullup 	P5REN		// Port Function Internal Pull up 

// Data Port Address for PORT6
#define	p6_io_port_out	    P6OUT		// Output Latch Register
#define p6_io_port_in		P6IN		// Input Latch Register
#define p6_io_port_dir	 	P6DIR		// Port Direction Register
#define p6_io_port_setup	P6SEL		// Port Function Select Register
#define p6_io_port_pullup 	P6REN		// Port Function Internal Pull up 


// Data Port Address for PORT7
#define	p7_io_port_out	    P7OUT		// Output Latch Register
#define p7_io_port_in		P7IN		// Input Latch Register
#define p7_io_port_dir	 	P7DIR		// Port Direction Register
#define p7_io_port_setup	P7SEL		// Port Function Select Register
#define p7_io_port_pullup 	P7REN		// Port Function Internal Pull up 


// Data Port Address for PORT8
#define	p8_io_port_out	    P8OUT		// Output Latch Register
#define p8_io_port_in		P8IN		// Input Latch Register
#define p8_io_port_dir	 	P8DIR		// Port Direction Register
#define p8_io_port_setup	P8SEL		// Port Function Select Register
#define p8_io_port_pullup 	P8REN		// Port Function Internal Pull up 
#define P8_io_port_drive	P8DS		// Drive Strength for Port Pin


// Data Port Pin
#define	p1_io_pin_0 	0		// Port Pin used (indexed from 0)
#define p1_io_pin_1   	1		// Port Pin used (indexed from 0)
#define p1_io_pin_2		2		// Port Pin used (indeded from 0)
#define p1_io_pin_3		3		// Port Pin used (indexed from 0)
#define p1_io_pin_4		4		// Port Pin used (indexed form 0)
#define p1_io_pin_5		5		// Port Pin used (indexed from 0)
#define p1_io_pin_6		6		// Port Pin used (indexed from 0)
#define p1_io_pin_7		7		// Port Pin used (indexed from 0)


// Data Port Pin
#define	p2_io_pin_0 	0		// Port Pin used (indexed from 0)
#define p2_io_pin_1   	1		// Port Pin used (indexed from 0)
#define p2_io_pin_2		2		// Port Pin used (indeded from 0)
#define p2_io_pin_3		3		// Port Pin used (indexed from 0)
#define p2_io_pin_4		4		// Port Pin used (indexed form 0)
#define p2_io_pin_5		5		// Port Pin used (indexed from 0)
#define p2_io_pin_6		6		// Port Pin used (indexed from 0)
#define p2_io_pin_7		7		// Port Pin used (indexed from 0)

// Data Port Pin
#define	p3_io_pin_0 	0		// Port Pin used (indexed from 0)
#define p3_io_pin_1   	1		// Port Pin used (indexed from 0)
#define p3_io_pin_2		2		// Port Pin used (indeded from 0)
#define p3_io_pin_3		3		// Port Pin used (indexed from 0)
#define p3_io_pin_4		4		// Port Pin used (indexed form 0)
#define p3_io_pin_5		5		// Port Pin used (indexed from 0)
#define p3_io_pin_6		6		// Port Pin used (indexed from 0)
#define p3_io_pin_7		7		// Port Pin used (indexed from 0)

// Data Port Pin
#define	p4_io_pin_0 	0		// Port Pin used (indexed from 0)
#define p4_io_pin_1   	1		// Port Pin used (indexed from 0)
#define p4_io_pin_2		2		// Port Pin used (indeded from 0)
#define p4_io_pin_3		3		// Port Pin used (indexed from 0)
#define p4_io_pin_4		4		// Port Pin used (indexed form 0)
#define p4_io_pin_5		5		// Port Pin used (indexed from 0)
#define p4_io_pin_6		6		// Port Pin used (indexed from 0)
#define p4_io_pin_7		7		// Port Pin used (indexed from 0)

// Data Port Pin
#define	p5_io_pin_0 	0		// Port Pin used (indexed from 0)
#define p5_io_pin_1   	1		// Port Pin used (indexed from 0)
#define p5_io_pin_2		2		// Port Pin used (indeded from 0)
#define p5_io_pin_3		3		// Port Pin used (indexed from 0)
#define p5_io_pin_4		4		// Port Pin used (indexed form 0)
#define p5_io_pin_5		5		// Port Pin used (indexed from 0)
#define p5_io_pin_6		6		// Port Pin used (indexed from 0)
#define p5_io_pin_7		7		// Port Pin used (indexed from 0)

// Data Port Pin
#define	p6_io_pin_0 	0		// Port Pin used (indexed from 0)
#define p6_io_pin_1   	1		// Port Pin used (indexed from 0)
#define p6_io_pin_2		2		// Port Pin used (indeded from 0)
#define p6_io_pin_3		3		// Port Pin used (indexed from 0)
#define p6_io_pin_4		4		// Port Pin used (indexed form 0)
#define p6_io_pin_5		5		// Port Pin used (indexed from 0)
#define p6_io_pin_6		6		// Port Pin used (indexed from 0)
#define p6_io_pin_7		7		// Port Pin used (indexed from 0)

// Data Port Pin
#define	p7_io_pin_0 	0		// Port Pin used (indexed from 0)
#define p7_io_pin_1   	1		// Port Pin used (indexed from 0)
#define p7_io_pin_2		2		// Port Pin used (indeded from 0)
#define p7_io_pin_3		3		// Port Pin used (indexed from 0)
#define p7_io_pin_4		4		// Port Pin used (indexed form 0)
#define p7_io_pin_5		5		// Port Pin used (indexed from 0)
#define p7_io_pin_6		6		// Port Pin used (indexed from 0)
#define p7_io_pin_7		7		// Port Pin used (indexed from 0)

// Data Port Pin
#define	p8_io_pin_0 	0		// Port Pin used (indexed from 0)
#define p8_io_pin_1   	1		// Port Pin used (indexed from 0)
#define p8_io_pin_2		2		// Port Pin used (indeded from 0)
#define p8_io_pin_3		3		// Port Pin used (indexed from 0)
#define p8_io_pin_4		4		// Port Pin used (indexed form 0)
#define p8_io_pin_5		5		// Port Pin used (indexed from 0)
#define p8_io_pin_6		6		// Port Pin used (indexed from 0)
#define p8_io_pin_7		7		// Port Pin used (indexed from 0)




// Setup IO Port(s)
void IO_InitializePort1(void);
void IO_InitializePort2(void);
void IO_InitializePort3(void);
void IO_InitializePort4(void);
void IO_InitializePort8(void);









void IO_SetPort(uint8_t, uint8_t, uint8_t);
uint8_t IO_GetPIN_Mask(uint8_t, uint8_t);

uint8_t IO_ReadPort4(void);



