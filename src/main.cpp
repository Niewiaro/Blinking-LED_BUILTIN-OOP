#include <Arduino.h>
#include <Led.h>

#define TIME 1000

Led *blinker;
int *hand;

void setup() {
  int time= TIME;
  hand= &time;

  Led arduinoBuiltInLed(time, LED_BUILTIN);
  blinker= &arduinoBuiltInLed;

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  blinker->blink();
  blinker->setInterval(*hand);
  *hand-= 50;

  if(*hand<= 10)
    *hand= TIME;
}