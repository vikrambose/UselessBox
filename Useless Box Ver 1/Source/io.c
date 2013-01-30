#include "main.h"
#include "io.h"



// Input from the 3 switches are in here
uint8_t P4Data;


// Masks for Port 1
uint8_t port1_pin_0_MASK = 1;
uint8_t port1_pin_1_MASK = 1;
uint8_t port1_pin_2_MASK = 1;
uint8_t port1_pin_3_MASK = 1;
uint8_t port1_pin_4_MASK = 1;
uint8_t port1_pin_5_MASK = 1;
uint8_t port1_pin_6_MASK = 1;
uint8_t port1_pin_7_MASK = 1;

// Masks for Port 2
uint8_t port2_pin_0_MASK = 1;
uint8_t port2_pin_1_MASK = 1;
uint8_t port2_pin_2_MASK = 1;
uint8_t port2_pin_3_MASK = 1;
uint8_t port2_pin_4_MASK = 1;
uint8_t port2_pin_5_MASK = 1;
uint8_t port2_pin_6_MASK = 1;
uint8_t port2_pin_7_MASK = 1;

// Masks for Port 3
uint8_t port3_pin_0_MASK = 1;
uint8_t port3_pin_1_MASK = 1;
uint8_t port3_pin_2_MASK = 1;
uint8_t port3_pin_3_MASK = 1;
uint8_t port3_pin_4_MASK = 1;
uint8_t port3_pin_5_MASK = 1;
uint8_t port3_pin_6_MASK = 1;
uint8_t port3_pin_7_MASK = 1;

// Masks for Port 4
uint8_t port4_pin_0_MASK = 1;
uint8_t port4_pin_1_MASK = 1;
uint8_t port4_pin_2_MASK = 1;
uint8_t port4_pin_3_MASK = 1;
uint8_t port4_pin_4_MASK = 1;
uint8_t port4_pin_5_MASK = 1;
uint8_t port4_pin_6_MASK = 1;
uint8_t port4_pin_7_MASK = 1;

// Masks for Port 5
uint8_t port5_pin_0_MASK = 1;
uint8_t port5_pin_1_MASK = 1;
uint8_t port5_pin_2_MASK = 1;
uint8_t port5_pin_3_MASK = 1;
uint8_t port5_pin_4_MASK = 1;
uint8_t port5_pin_5_MASK = 1;
uint8_t port5_pin_6_MASK = 1;
uint8_t port5_pin_7_MASK = 1;

// Masks for Port 6
uint8_t port6_pin_0_MASK = 1;
uint8_t port6_pin_1_MASK = 1;
uint8_t port6_pin_2_MASK = 1;
uint8_t port6_pin_3_MASK = 1;
uint8_t port6_pin_4_MASK = 1;
uint8_t port6_pin_5_MASK = 1;
uint8_t port6_pin_6_MASK = 1;
uint8_t port6_pin_7_MASK = 1;

// Masks for Port 7
uint8_t port7_pin_0_MASK = 1;
uint8_t port7_pin_1_MASK = 1;
uint8_t port7_pin_2_MASK = 1;
uint8_t port7_pin_3_MASK = 1;
uint8_t port7_pin_4_MASK = 1;
uint8_t port7_pin_5_MASK = 1;
uint8_t port7_pin_6_MASK = 1;
uint8_t port7_pin_7_MASK = 1;

// Masks for Port 8
uint8_t port8_pin_0_MASK = 1;
uint8_t port8_pin_1_MASK = 1;
uint8_t port8_pin_2_MASK = 1;
uint8_t port8_pin_3_MASK = 1;
uint8_t port8_pin_4_MASK = 1;
uint8_t port8_pin_5_MASK = 1;
uint8_t port8_pin_6_MASK = 1;
uint8_t port8_pin_7_MASK = 1;





/**********************************************************************//**
 * @brief 
 *         
 * @param  none
 * 
 * @return Contents of Port 4
 *************************************************************************/
uint8_t IO_ReadPort4(void)
{ 
    extern uint8_t P4Data;


	P4Data = P4IN;
    return 0;
}



/**********************************************************************//**
 * @brief 
 *         
 * @param  none
 * 
 * @return none
 *************************************************************************/
uint8_t IO_GetPIN_Mask(uint8_t port_no, uint8_t pin)
{
	switch (port_no)
		{
			case PORT1:
				switch (pin)
					{
						case Pin0:
							return port1_pin_0_MASK;
							// break;
						case Pin1:
							return port1_pin_1_MASK;
							// break;
						case Pin2:
							return port1_pin_2_MASK;
							// break;
						case Pin3:
							return port1_pin_3_MASK;
							// break;
						case Pin4:
							return port1_pin_4_MASK;
							// break;
						case Pin5:
							return port1_pin_5_MASK;
							// break;
						case Pin6:
							return port1_pin_6_MASK;
							// break;
						case Pin7:
							return port1_pin_7_MASK;
							// break;
						default:
							break;
					}				
				break;
			case PORT2:
				switch (pin)
					{
						case Pin0:
							return port2_pin_0_MASK;
							// break;
						case Pin1:
							return port2_pin_1_MASK;
							// break;
						case Pin2:
							return port2_pin_2_MASK;
							// break;
						case Pin3:
							return port2_pin_3_MASK;
							// break;
						case Pin4:
							return port2_pin_4_MASK;
							// break;
						case Pin5:
							return port2_pin_5_MASK;
							// break;
						case Pin6:
							return port2_pin_6_MASK;
							// break;
						case Pin7:
							return port2_pin_7_MASK;
							// break;
						default:
							break;
					}
				break;
			case PORT3:
				switch (pin)
					{
						case Pin0:
							return port3_pin_0_MASK;
							// break;
						case Pin1:
							return port3_pin_1_MASK;
							// break;
						case Pin2:
							return port3_pin_2_MASK;
							// break;
						case Pin3:
							return port3_pin_3_MASK;
							// break;
						case Pin4:
							return port3_pin_4_MASK;
							// break;
						case Pin5:
							return port3_pin_5_MASK;
							// break;
						case Pin6:
							return port3_pin_6_MASK;
							// break;
						case Pin7:
							return port3_pin_7_MASK;
							// break;
						default:
							break;
					}
				break;
			case PORT4:
				switch (pin)
					{
						case Pin0:
							return port4_pin_0_MASK;
							// break;
						case Pin1:
							return port4_pin_1_MASK;
							// break;
						case Pin2:
							return port4_pin_2_MASK;
							// break;
						case Pin3:
							return port4_pin_3_MASK;
							// break;
						case Pin4:
							return port4_pin_4_MASK;
							// break;
						case Pin5:
							return port4_pin_5_MASK;
							// break;
						case Pin6:
							return port4_pin_6_MASK;
							// break;
						case Pin7:
							return port4_pin_7_MASK;
							// break;
						default:
							break;
					}
				break;
			case PORT5:
				switch (pin)
					{
						case Pin0:
							return port5_pin_0_MASK;
							// break;
						case Pin1:
							return port5_pin_1_MASK;
							// break;
						case Pin2:
							return port5_pin_2_MASK;
							// break;
						case Pin3:
							return port5_pin_3_MASK;
							// break;
						case Pin4:
							return port5_pin_4_MASK;
							// break;
						case Pin5:
							return port5_pin_5_MASK;
							// break;
						case Pin6:
							return port5_pin_6_MASK;
							// break;
						case Pin7:
							return port5_pin_7_MASK;
							// break;
						default:
							break;
					}
				break;
			case PORT6:
				switch (pin)
					{
						case Pin0:
							return port6_pin_0_MASK;
							// break;
						case Pin1:
							return port6_pin_1_MASK;
							// break;
						case Pin2:
							return port6_pin_2_MASK;
							// break;
						case Pin3:
							return port6_pin_3_MASK;
							// break;
						case Pin4:
							return port6_pin_4_MASK;
							// break;
						case Pin5:
							return port6_pin_5_MASK;
							// break;
						case Pin6:
							return port6_pin_6_MASK;
							// break;
						case Pin7:
							return port6_pin_7_MASK;
							// break;
						default:
							break;
					}
				break;
			case PORT7:
				switch (pin)
					{
						case Pin0:
							return port7_pin_0_MASK;
							// break;
						case Pin1:
							return port7_pin_1_MASK;
							// break;
						case Pin2:
							return port7_pin_2_MASK;
							// break;
						case Pin3:
							return port7_pin_3_MASK;
							// break;
						case Pin4:
							return port7_pin_4_MASK;
							// break;
						case Pin5:
							return port7_pin_5_MASK;
							// break;
						case Pin6:
							return port7_pin_6_MASK;
							// break;
						case Pin7:
							return port7_pin_7_MASK;
							// break;
						default:
							break;
					}
				break;
			case PORT8:
				switch (pin)
					{
						case Pin0:
							return port8_pin_0_MASK;
							// break;
						case Pin1:
							return port8_pin_1_MASK;
							// break;
						case Pin2:
							return port8_pin_2_MASK;
							// break;
						case Pin3:
							return port8_pin_3_MASK;
							// break;
						case Pin4:
							return port8_pin_4_MASK;
							// break;
						case Pin5:
							return port8_pin_5_MASK;
							// break;
						case Pin6:
							return port8_pin_6_MASK;
							// break;
						case Pin7:
							return port8_pin_7_MASK;
							// break;
						default:
							break;
					}

				break;
			case PORT9:
				break;
			case PORT10:
				break;
			default:
				break;
		}
        return 0;
}





/**********************************************************************//**
 * @brief Port No: 1-10, Pin: 0 -7, State: 0(OFF) -1 (ON)
 *         
 * @param  none
 * 
 * @return none
 *************************************************************************/
void IO_SetPort(uint8_t port_no, uint8_t pin, uint8_t state)
{
	uint8_t PIN_MASK;


	// Update STATE so it can be applied to all pins
	if (state >= 1) 
		{
			state = HIGH;
		}
	else
		{
			state = LOW;
		}
	
	// Obtain Pin Mask
	PIN_MASK = IO_GetPIN_Mask(port_no, pin);
	

	// Switch Port State
	switch (port_no)
		{
			case PORT1:
					if (state == 1)
							p1_io_port_out |=  ~PIN_MASK;
					else
							p1_io_port_out &=  PIN_MASK;
					break;
			case PORT2:
					if (state == 1)
							p2_io_port_out |=  ~PIN_MASK;
					else
							p2_io_port_out &=  PIN_MASK;
				break;
			case PORT3:
					if (state == 1)
							p3_io_port_out |=  ~PIN_MASK;
					else
							p3_io_port_out &=  PIN_MASK;				
				break;
			case PORT4:
					if (state == 1)
							p4_io_port_out |=  ~PIN_MASK;
					else
							p4_io_port_out &=  PIN_MASK;
				break;
			case PORT5:
					if (state == 1)
							p5_io_port_out |=  ~PIN_MASK;
					else
							p5_io_port_out &=  PIN_MASK;
				break;
			case PORT6:
					if (state == 1)
							p6_io_port_out |=  ~PIN_MASK;
					else
							p6_io_port_out &=  PIN_MASK;
				break;
			case PORT7:
					if (state == 1)
							p7_io_port_out |=  ~PIN_MASK;
					else
							p7_io_port_out &=  PIN_MASK;				
				break;
			case PORT8:
					if (state == 1)
							p8_io_port_out |=  ~PIN_MASK;
					else
							p8_io_port_out &=  PIN_MASK;
				break;
			case PORT9:
				break;
			case PORT10:
				break;
			default:
				break;
		}
		
}





/**********************************************************************//**
 * @brief Initialize Port 1 of the microprocessor 
 *         
 * @param  none
 * 
 * @return none
 *************************************************************************/
void IO_InitializePort1(void)
{
	// Initialzie externals(s)
	extern uint8_t port1_pin_0_MASK;
	extern uint8_t port1_pin_1_MASK;
	extern uint8_t port1_pin_2_MASK;
	extern uint8_t port1_pin_3_MASK;
	extern uint8_t port1_pin_4_MASK;
	extern uint8_t port1_pin_5_MASK;	
	extern uint8_t port1_pin_6_MASK;
	extern uint8_t port1_pin_7_MASK;

	// Initialize the I/O Mask(s)
	port1_pin_0_MASK <<= p1_io_pin_0;
	port1_pin_0_MASK = ~port1_pin_0_MASK;
	
	port1_pin_1_MASK <<= p1_io_pin_1;
	port1_pin_1_MASK = ~port1_pin_1_MASK;

	port1_pin_2_MASK <<= p1_io_pin_2;
	port1_pin_2_MASK = ~port1_pin_2_MASK;

	port1_pin_3_MASK <<= p1_io_pin_3;
	port1_pin_3_MASK = ~port1_pin_3_MASK;

	port1_pin_4_MASK <<= p1_io_pin_4;
	port1_pin_4_MASK = ~port1_pin_4_MASK;

	port1_pin_5_MASK <<= p1_io_pin_5;
	port1_pin_5_MASK = ~port1_pin_5_MASK;

	port1_pin_6_MASK <<= p1_io_pin_6;
	port1_pin_6_MASK = ~port1_pin_6_MASK;

	port1_pin_7_MASK <<= p1_io_pin_7;
	port1_pin_7_MASK = ~port1_pin_7_MASK;


	// Make port 1 pins (1.1, 1.2) general IO: 
	p1_io_port_setup &= port1_pin_1_MASK;
	p1_io_port_setup &= port1_pin_2_MASK;

	// Make Port 1 pins (1.1, 1.2) Input Pins
	p1_io_port_dir	&= port1_pin_1_MASK;
	p1_io_port_dir  &= port1_pin_2_MASK;

	// Make Port 1 Interupt Enabled
	p1_io_Interrupt |= ~port1_pin_1_MASK;

	// Set the Interrupt Mask for p1 
	p1_io_IntEdge |= ~port1_pin_1_MASK;
	


	// Make Port 1 pins (1.1, 1.2) Internal Pullups disabled set to 0
	// p1_io_port_pullup &= port1_pin_1_MASK;
	// p1_io_port_pullup &= port1_pin_2_MASK;

}




/**********************************************************************//**
 * @brief Initialize Port 2 of the microprocessor 
 *         
 * @param  none
 * 
 * @return none
 *************************************************************************/
void IO_InitializePort2(void)
{
	// Initialzie externals(s)
	extern uint8_t port2_pin_0_MASK;
	extern uint8_t port2_pin_1_MASK;
	extern uint8_t port2_pin_2_MASK;
	extern uint8_t port2_pin_3_MASK;
	extern uint8_t port2_pin_4_MASK;
	extern uint8_t port2_pin_5_MASK;	
	extern uint8_t port2_pin_6_MASK;
	extern uint8_t port2_pin_7_MASK;

	// Initialize the I/O Mask(s)
	port2_pin_0_MASK <<= p2_io_pin_0;
	port2_pin_0_MASK = ~port2_pin_0_MASK;
	
	port2_pin_1_MASK <<= p2_io_pin_1;
	port2_pin_1_MASK = ~port2_pin_1_MASK;

	port2_pin_2_MASK <<= p2_io_pin_2;
	port2_pin_2_MASK = ~port2_pin_2_MASK;

	port2_pin_3_MASK <<= p2_io_pin_3;
	port2_pin_3_MASK = ~port2_pin_3_MASK;

	port2_pin_4_MASK <<= p2_io_pin_4;
	port2_pin_4_MASK = ~port2_pin_4_MASK;

	port2_pin_5_MASK <<= p2_io_pin_5;
	port2_pin_5_MASK = ~port2_pin_5_MASK;

	port2_pin_6_MASK <<= p2_io_pin_6;
	port2_pin_6_MASK = ~port2_pin_6_MASK;

	port2_pin_7_MASK <<= p2_io_pin_7;
	port2_pin_7_MASK = ~port2_pin_7_MASK;

	
	// Make port 2 pins (2.2) general IO: 
	p2_io_port_setup &= port2_pin_2_MASK;

	// Make Port 2 pins (2.2) Input Pins
	p2_io_port_dir  &= port2_pin_2_MASK;

	// Make Port 2 Interupt Enabled
	p2_io_Interrupt |= ~port2_pin_2_MASK;

	// Set the Interrupt Mask for p2 
	p2_io_IntEdge |= ~port2_pin_2_MASK;

	// Clear IFG
	p2_io_IntClr &= port2_pin_2_MASK;


}







/**********************************************************************//**
 * @brief Initialize Port3 of the microprocessor
 *         
 * @param  none
 * 
 * @return none
 *************************************************************************/
void IO_InitializePort3(void)
{
	// Initialzie externals(s)
	extern uint8_t port3_pin_0_MASK;
	extern uint8_t port3_pin_1_MASK;
	extern uint8_t port3_pin_2_MASK;
	extern uint8_t port3_pin_3_MASK;
	extern uint8_t port3_pin_4_MASK;
	extern uint8_t port3_pin_5_MASK;	
	extern uint8_t port3_pin_6_MASK;
	extern uint8_t port3_pin_7_MASK;

	// Initialize the I/O Mask(s)
	port3_pin_0_MASK <<= p3_io_pin_0;
	port3_pin_0_MASK = ~port3_pin_0_MASK;
	
	port3_pin_1_MASK <<= p3_io_pin_1;
	port3_pin_1_MASK = ~port3_pin_1_MASK;

	port3_pin_2_MASK <<= p3_io_pin_2;
	port3_pin_2_MASK = ~port3_pin_2_MASK;

	port3_pin_3_MASK <<= p3_io_pin_3;
	port3_pin_3_MASK = ~port3_pin_3_MASK;

	port3_pin_4_MASK <<= p3_io_pin_4;
	port3_pin_4_MASK = ~port3_pin_4_MASK;

	port3_pin_5_MASK <<= p3_io_pin_5;
	port3_pin_5_MASK = ~port3_pin_5_MASK;

	port3_pin_6_MASK <<= p3_io_pin_6;
	port3_pin_6_MASK = ~port3_pin_6_MASK;

	port3_pin_7_MASK <<= p3_io_pin_7;
	port3_pin_7_MASK = ~port3_pin_7_MASK;

	// Make port 3 pins (3.3, 3.4, 3.5) general IO: Set to 0
	p3_io_port_setup &= port3_pin_3_MASK;
	p3_io_port_setup &= port3_pin_4_MASK;
	p3_io_port_setup &= port3_pin_5_MASK;


	// Make Port 3 pins (3.3, 3.4, 3.5) Output Pins: Set to 1
	p3_io_port_dir  |= port3_pin_3_MASK;
	p3_io_port_dir  |= port3_pin_4_MASK;
	p3_io_port_dir  |= port3_pin_5_MASK;


	// Make Port 3 pins (3.1, 3.2) Internal Pullups disabled set to 0
	//p3_io_port_pullup &= port3_pin_1_MASK;
	//p3_io_port_pullup &= port3_pin_2_MASK;

}





/**********************************************************************//**
 * @brief Initialize Port4 of the microprocessor
 *         
 * @param  none
 * 
 * @return none
 *************************************************************************/
void IO_InitializePort4(void)
{
	// Initialzie externals(s)
	extern uint8_t port4_pin_0_MASK;
	extern uint8_t port4_pin_1_MASK;
	extern uint8_t port4_pin_2_MASK;
	extern uint8_t port4_pin_3_MASK;
	extern uint8_t port4_pin_4_MASK;
	extern uint8_t port4_pin_5_MASK;	
	extern uint8_t port4_pin_6_MASK;
	extern uint8_t port4_pin_7_MASK;

	// Initialize the I/O Mask(s)
	port4_pin_0_MASK <<= p4_io_pin_0;
	port4_pin_0_MASK = ~port4_pin_0_MASK;
	
	port4_pin_1_MASK <<= p4_io_pin_1;
	port4_pin_1_MASK = ~port4_pin_1_MASK;

	port4_pin_2_MASK <<= p4_io_pin_2;
	port4_pin_2_MASK = ~port4_pin_2_MASK;

	port4_pin_3_MASK <<= p4_io_pin_3;
	port4_pin_3_MASK = ~port4_pin_3_MASK;

	port4_pin_4_MASK <<= p4_io_pin_4;
	port4_pin_4_MASK = ~port4_pin_4_MASK;

	port4_pin_5_MASK <<= p4_io_pin_5;
	port4_pin_5_MASK = ~port4_pin_5_MASK;

	port4_pin_6_MASK <<= p4_io_pin_6;
	port4_pin_6_MASK = ~port4_pin_6_MASK;

	port4_pin_7_MASK <<= p4_io_pin_7;
	port4_pin_7_MASK = ~port4_pin_7_MASK;

    


	// // output is high to make it pullup
	p4_io_port_out |= port4_pin_0_MASK;
	p4_io_port_out |= port4_pin_1_MASK;
	p4_io_port_out |= port4_pin_2_MASK;
	p4_io_port_out |= port4_pin_3_MASK;
	p4_io_port_out |= port4_pin_4_MASK;
	p4_io_port_out |= port4_pin_5_MASK;
	p4_io_port_out |= port4_pin_6_MASK;
	p4_io_port_out |= port4_pin_7_MASK;


	// Make Port 4 pins (Output: 4.1, Inputs: 4.0, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7) Inputs Pins: Set to 0
	p4_io_port_dir  &= port4_pin_0_MASK;
	p4_io_port_dir  |= ~port4_pin_1_MASK;
	p4_io_port_dir  &= port4_pin_2_MASK;
	p4_io_port_dir  &= port4_pin_3_MASK;
	p4_io_port_dir  &= port4_pin_4_MASK;
	p4_io_port_dir  &= port4_pin_5_MASK;
	p4_io_port_dir  &= port4_pin_6_MASK;
	p4_io_port_dir  &= port4_pin_7_MASK;	


	// Make Port 4 pins (4.0, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7) Internal Pullups enabled set to 1
	p4_io_port_pullup |= ~port4_pin_0_MASK;
	//p4_io_port_pullup |= ~port4_pin_1_MASK;
	p4_io_port_pullup |= ~port4_pin_2_MASK;
	p4_io_port_pullup |= ~port4_pin_3_MASK;
	p4_io_port_pullup |= ~port4_pin_4_MASK;
	p4_io_port_pullup |= ~port4_pin_5_MASK;
	p4_io_port_pullup |= ~port4_pin_6_MASK;
	p4_io_port_pullup |= ~port4_pin_7_MASK;



	// Make port 4 pins (Output: 4.1, 4.0, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7) general IO: Set to 0
	p4_io_port_setup &= port4_pin_0_MASK;
	p4_io_port_setup &= port4_pin_1_MASK;
	p4_io_port_setup &= port4_pin_2_MASK;
	p4_io_port_setup &= port4_pin_3_MASK;
	p4_io_port_setup &= port4_pin_4_MASK;
	p4_io_port_setup &= port4_pin_5_MASK;
	p4_io_port_setup &= port4_pin_6_MASK;
	p4_io_port_setup &= port4_pin_7_MASK;
	






}



/**********************************************************************//**
 * @brief Initialize Port8 of the microprocessor
 *         
 * @param  none
 * 
 * @return none
 *************************************************************************/
void IO_InitializePort8(void)
{
	// Initialzie externals(s)
	extern uint8_t port8_pin_0_MASK;
	extern uint8_t port8_pin_1_MASK;
	extern uint8_t port8_pin_2_MASK;
	extern uint8_t port8_pin_3_MASK;
	extern uint8_t port8_pin_4_MASK;
	extern uint8_t port8_pin_5_MASK;	
	extern uint8_t port8_pin_6_MASK;
	extern uint8_t port8_pin_7_MASK;

	// Initialize the I/O Mask(s)
	port8_pin_0_MASK <<= p8_io_pin_0;
	port8_pin_0_MASK = ~port8_pin_0_MASK;
	
	port8_pin_1_MASK <<= p8_io_pin_1;
	port8_pin_1_MASK = ~port8_pin_1_MASK;

	port8_pin_2_MASK <<= p8_io_pin_2;
	port8_pin_2_MASK = ~port8_pin_2_MASK;

	port8_pin_3_MASK <<= p8_io_pin_3;
	port8_pin_3_MASK = ~port8_pin_3_MASK;

	port8_pin_4_MASK <<= p8_io_pin_4;
	port8_pin_4_MASK = ~port8_pin_4_MASK;

	port8_pin_5_MASK <<= p8_io_pin_5;
	port8_pin_5_MASK = ~port8_pin_5_MASK;

	port8_pin_6_MASK <<= p8_io_pin_6;
	port8_pin_6_MASK = ~port8_pin_6_MASK;

	port8_pin_7_MASK <<= p8_io_pin_7;
	port8_pin_7_MASK = ~port8_pin_7_MASK;

	// Make port 8 pins (8.0) general IO: Set to 0
	p8_io_port_setup &= port8_pin_0_MASK;


	// Make Port 8 pins (8.0) Output Pins: Set to 1
	p8_io_port_dir  |= ~port8_pin_0_MASK;

	// Raise the Drive Strength (8.0) Output Pins: 
	P8_io_port_drive |= ~port8_pin_0_MASK;


	// Make Port 8 pins (8.1, 8.2) Internal Pullups disabled set to 0
	//p3_io_port_pullup &= port3_pin_1_MASK;
	//p3_io_port_pullup &= port3_pin_2_MASK;

}


