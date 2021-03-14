#ifndef MOTORDRIVER_H
#define MOTORDRIVER_H

/**
 * Motor Driver class for the HiLetgo BTS7960 43A High Power Motor Driver Module
 * https://www.amazon.com/HiLetgo-BTS7960-Driver-Arduino-Current/dp/B00WSN98DC/ref=sr_1_26?dchild=1&keywords=24v+motor+driver+pwm&qid=1614647385&sr=8-26
 * 
 * Needs a PWM capable pin on microcontroller.
 */

class MotorDriver {
public:
    MotorDriver(uint8_t pin) : _pin(pin) {}
    void begin() { pinMode(_pin, OUTPUT); }
    void set(uint8_t pwm){ analogWrite(_pin, pwm); }
private:
    const uint8_t _pin;
};


#endif