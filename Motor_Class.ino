//This code is written for the robot car's motors and code in their movements through the use of classes.

#include "motorClass.h"  //Includes the "sevenSegment" h file

int motors[] = { 5, 6, 7, 8 };  //Creates an array composed of the pin of the motors

motorClass robotCar(motors);  //Constructs the robot car's motors using the pins

void setup() {      //Run the following code once
  robotCar.init();  //Initialize the motors
}

void loop() {  //this loop indicates what direction the car will go in 
robotCar.setSpeed(255);  //Sets the car's speed

robotCar.forward();  //Moves the car forwards
delay(1000);         

robotCar.backward();  //Moves the car backwards
delay(1000);         
robotCar.left();      //Moves the car left
delay(1000);          

robotCar.right();  //Moves the car right
delay(1000);       //Keeps the movement for 1 second

robotCar.stop();  //Moves the car stop
delay(1000);      //Keeps the movement for 1 second
}
