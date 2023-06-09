#ifndef LED_H // if not define then define file
#define LED_H

class Led {
public: // public section, accessable for everyone
    Led(int interval= 1000, int led= 13); // constructor with parameters and inital values
    bool setInterval(int interval); // setting method
    void blink(); // blinking method

private: // private part
    int time;
    int ledBuiltIn;
};

#endif