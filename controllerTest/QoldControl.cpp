#include "QoldControl.h"
#include <iostream>
#include "wiringPi.h"

QoldControl::QoldControl(){
            relay = -1;
            mode = LOW;
        }

QoldControl::~QoldControl(){}

void QoldControl::relayAttachToPin(int pinNumber){
            relay = pinNumber;
            pinMode(pinNumber, OUTPUT);
        }

void QoldControl::switchPin(){
            digitalWrite(relay, !mode);
            mode = !mode;
        }