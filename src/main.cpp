/**
* @file main.cpp
 * @brief Basic MG995 servo motor control using fixed angles
 * @author Meenakshi
 * @date 2026-02-20
 *
 * @details
 * This program demonstrates basic servo control by rotating
 * the MG995 servo motor to predefined angles with delays.
 */

#include <Arduino.h>
#include <Servo.h>

Servo myservo;
const int SERVO_PIN = 10;

/**
 * @brief Initializes serial communication and attaches the servo motor
 */
void setup() {
    Serial.begin(9600);
    myservo.attach(SERVO_PIN);
    Serial.println("Servo initialized");
}

/**
 * @brief Rotates the servo motor through fixed angles
 */
void loop() {
    myservo.write(0);
    delay(500);

    myservo.write(90);
    delay(500);

    myservo.write(120);
    delay(500);

    myservo.write(180);
    delay(500);
}