#include <wiringPi.h>
#include <iostream>

#define pin_pwmA 26
#define pin_dirA 31
#define pin_pwmB 23
#define pin_dirB 30

using std::cout;
using std::cin;
using std::endl;

int main()
{
    wiringPiSetup();
    pinMode(pin_dirA,OUTPUT);
    pinMode(pin_pwmA,PWM_OUTPUT);

    pinMode(pin_dirB,OUTPUT);
    pinMode(pin_pwmB,PWM_OUTPUT);

    int direction_pin = 1;
    int value = 1000;

    digitalWrite(pin_dirA,direction_pin);
    pwmWrite(pin_pwmA,value);

    digitalWrite(pin_dirB,direction_pin);
    pwmWrite(pin_pwmB,value);

    return 0;

}
