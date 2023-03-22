#include <Arduino.h>
#include <Led.h>

Led *blinker;

void setup() {
  Led arduinoBuiltInLed(2000, LED_BUILTIN);
  blinker= &arduinoBuiltInLed;

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  blinker->blink();
}