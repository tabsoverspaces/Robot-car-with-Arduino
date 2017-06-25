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
const int rightDrive = 2;
const int leftDrive = 3;

// front servo motors that steer the robot
// they have to be separately controlled
// thus two output pins are needed
// we also need two Servo instances
// for controlling the motors
const int rightSteer = 4;
const int leftSteer = 5;
Servo rightServo;
Servo leftServo;

void setup() {
  // lights
  pinMode(frontLights, OUTPUT);
  pinMode(readLights, OUTPUT);

  // drive motors
  pinMode(rightDrive, OUTPUT);
  pinMode(leftDrive, OUTPUT);

  // steering servos
  rightServo.attach(rightSteer);
  leftServo.attach(leftSteer);
  
  
 


}

void loop() {
  // put your main code here, to run repeatedly:

}
