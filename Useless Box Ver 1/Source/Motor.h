

#define CLOCKWISE 1
#define ANTI_CLOCKWISE 2
#define REST 3
#define MOVE 4
#define HIGH_SPEED 1
#define MID_SPEED 2
#define LOW_SPEED 3
#define MOTOR_STOP 4
#define ON 1
#define OFF 0
#define ARM_SLEEP 0
#define ARM_AWAKE 1



// Motor Control User Variables
typedef 
	struct
	{
		uint8_t DIRECTION;
	}
_MCB_UserVariables;

// Motor Control: Internal Variables
typedef
	struct
	{
		uint8_t COUNT;
		uint8_t TURN;
		uint8_t STATE;
		uint8_t ACTION;
}
_MCB_ControlVariables;



// Motor Control Block 
typedef
	struct 
{
	_MCB_UserVariables Commands;
	_MCB_ControlVariables Control;
	
} _MotorControlBlock;



// Initialize the motor control Block
void MCB_Init(void);
void MotorPowerSwitch(uint8_t);
void MCB_TurnOffSwitchAndReturn(void);




