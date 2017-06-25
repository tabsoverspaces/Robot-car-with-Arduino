/* Author : Postolovski Dragan
 * 
 * The following sketch is used to control
 * a (for now) autonomous robot car
 * that can move itself based on its surroundings
 * (or, in the future, via a controller)
 * 
 * File created on : 25 June 2017 11:58 PM
 */

// the Servo library is needed to be able to
// control the servo motors
#include <Servo.h>

 // there are 2 pins that have 2 LEDs each
 // connected to them
 // on control the front lights and the other 
 // controls the read lights, when reversing
 // lights can be toggled on or off
const int frontLights = 13;
const int rearLights = 12;

// rear motors that give the drive to the robot
// I think it's more logical as well as just more 
// practical to be able to separately control them 
// rathen than through one common pin
// being able to tweak their rotation
// can offer better stability while cornering
// we need 2 pins per motor,
// to be able to drive it forwards
// as well as backwards
const int rightDriveForward = 2;
const int rightDriveBackward = 3;
const int leftDriveForward = 4;
const int leftDriveBackward = 5;

// front servo motors that steer the robot
// they have to be separately controlled
// thus two output pins are needed
// we also need two Servo instances
// for controlling the motors
const int rightSteer = 6;
const int leftSteer = 7;
Servo rightServo;
Servo leftServo;


// MAIN SETUP METHOD
void setup() {
  // lights
  pinMode(frontLights, OUTPUT);
  pinMode(readLights, OUTPUT);

  // drive motors
  pinMode(rightDriveForward, OUTPUT);
  pinMode(rightDriveBackward, OUTPUT);
  pinMode(leftDriveForward, OUTPUT);
  pinMode(leftDriveBackward, OUTPUT);

  // steering servos
  rightServo.attach(rightSteer);
  leftServo.attach(leftSteer);
  
}


// MAIN LOOP METHOD
void loop() {
  // put your main code here, to run repeatedly:

}

/////////////////////////////////////////////////
// ADDITIONAL METHODS

// method used to park the car,
// i.e. set all engine movement to zero
// both forward and backward
// this might have unexpected behaviour
// if stopping uphill or downhill
void park()
{
  digitalWrite(rightDriveForward, LOW);
  digitalWrite(leftDriveForward, LOW);
  digitalWrite(rightDriveBackward, LOW);
  digitalWrite(leftDriveBackward, LOW);
}

// method used to drive the car forwards
// uses both motors equally
// FOR NOW at full speed
void drive()
{
  digitalWrite(rightDriveForward, HIGH);
  digitalWrite(leftDriveForward, HIGH);
}

// method used to drive the car in reverse
// both motors equally used
void reverse()
{
  digitalWrite(rightDriveBackward, HIGH);
  digitalWrite(leftDriveBackward, HIGH);
}
