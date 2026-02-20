/**
* @file main.cpp
 * @brief Simple servo sweep demonstration for MG995 closed-loop axis control system.
 * @author meenakshi
 * @date 2026-02-17
 *
 * @details
 * Demonstrates a basic sweep of a servo (MG995) from 0 to 180 degrees and back,
 * printing the current angle to Serial at each step. Intended as a simple test
 * program and starting point for closed-loop axis control development.
 */
#include <Arduino.h>
#include <Servo.h>
Servo myServo;
void setup() {
// write your initialization code here
 Serial.begin(9600);
 myservo.attach(10);
 Serial.println("Servo initiate");
}


void loop() {
 myservo.write(0);
 delay(500);
 myservo.write(0);
 delay(500);

 myservo.write(90);
 delay(500);
 myservo.write(120);
 delay(500);

 myservo.write(180);
 delay(500);
}