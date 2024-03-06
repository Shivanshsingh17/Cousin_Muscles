///If everything works fine then the motor should rotate once in clockwise and then anti-clockwise direction

#include <Stepper.h>

const int stepsPerRevolution = 200;  ///Number of steps for the revolution 

// initialize the stepper library on pins 8 through 11:///Set it according to what you do
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // set the speed 
  myStepper.setSpeed(60);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // step one revolution  in one direction:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);

  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);
}