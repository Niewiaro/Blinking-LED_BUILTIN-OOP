#ifndef LED_H
#define LED_H

class Led {
public:
    Led(int interval= 1000, int led= 13);
    void setInterval(int interval);
    void blink();

private:
    int time;
    int ledBuiltIn;
};

#endif