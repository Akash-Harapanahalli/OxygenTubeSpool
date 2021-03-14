#include "MotorDriver.h"

MotorDriver motor(3);
MotorDriver solenoids(5);

void setup() {
  // put your setup code here, to run once:
  motor.begin();
  solenoids.begin();
  pinMode(2, INPUT_PULLUP);
}

uint8_t bruh = 0;

void loop() {
  // put your main code here, to run repeatedly:
  
  if(!digitalRead(2)){
    motor.set(127 + bruh >> 1);
    solenoids.set(75);
  } else {
    motor.set(0);
    solenoids.set(0);
  }
  delay(5);
  bruh += 2;
}
