#include <Arduino.h>
#include <Led.h>

Led::Led(int interval, int pin): time(interval), ledBuiltIn(pin) {}

void Led::setInterval(int interval) {
    time= interval;
}

void Led::blink() {
    digitalWrite(ledBuiltIn, HIGH);
    delay(time);
    digitalWrite(ledBuiltIn, LOW);
    delay(time);
}
