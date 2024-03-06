/// Run this when you try to test the stepper motor with a knob 'potentiometer'
/// You should be able to find a potentiometer in JHC (I Hope)

/// I don't know what stepper motor you're gonna test it with so this will be for the most generic code

#include <Stepper.h>

// change this to the number of steps on your motor
#define STEPS 100

Stepper stepper(STEPS, 8, 9, 10, 11); ///change the pins if you have to

int previous = 0;

void setup() {
  ///set speed here
  stepper.setSpeed(30);
}

void loop() {
  // get the sensor value
  int val = analogRead(0);
  // sensor reading
  stepper.step(val - previous);

  // remember the previous value of the sensor
  previous = val;
}