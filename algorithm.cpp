// This program is only to mark up the procedure of walking-motion of a robot, so it's not procedurally active.
#include <Servo.h>

// Define servo objects
Servo hipLeft;
Servo kneeLeft;
Servo ankleLeft;
Servo hipRight;
Servo kneeRight;
Servo ankleRight;

// Define initial positions
int hipLeftPos = 90;
int kneeLeftPos = 90;
int ankleLeftPos = 90;
int hipRightPos = 90;
int kneeRightPos = 90;
int ankleRightPos = 90;

void setup() {
  // Attach servos to corresponding pins
  hipLeft.attach(2);
  kneeLeft.attach(3);
  ankleLeft.attach(4);
  hipRight.attach(5);
  kneeRight.attach(6);
  ankleRight.attach(7);

  // Initialize servos to starting positions
  hipLeft.write(hipLeftPos);
  kneeLeft.write(kneeLeftPos);
  ankleLeft.write(ankleLeftPos);
  hipRight.write(hipRightPos);
  kneeRight.write(kneeRightPos);
  ankleRight.write(ankleRightPos);
}

void loop() {
  // Shift weight to right leg
  shiftWeightRight();
  delay(1000);

  // Lift left leg
  liftLeftLeg();
  delay(1000);

  // Move left leg forward
  moveLeftLegForward();
  delay(1000);

  // Place left leg down
  placeLeftLegDown();
  delay(1000);

  // Shift weight to left leg
  shiftWeightLeft();
  delay(1000);

  // Lift right leg
  liftRightLeg();
  delay(1000);

  // Move right leg forward
  moveRightLegForward();
  delay(1000);

  // Place right leg down
  placeRightLegDown();
  delay(1000);
}
