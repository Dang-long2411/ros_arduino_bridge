/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef BLD300B_MOTOR_DRIVER
  #define LEFT_DIR_PIN    5
  #define LEFT_PWM_PIN    6
  #define RIGHT_DIR_PIN   9
  #define RIGHT_PWM_PIN   10
  #define MOTOR_ENABLE_PIN 4

#elif define L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 5
  #define LEFT_MOTOR_BACKWARD  6
  #define RIGHT_MOTOR_FORWARD  9
  #define LEFT_MOTOR_FORWARD   10
  #define RIGHT_MOTOR_ENABLE 12
  #define LEFT_MOTOR_ENABLE 13
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
