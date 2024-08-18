#include "mbed.h"

// Toggling Leds with the push button PC13 
DigitalIn BlueBttn(PC_13);
DigitalOut ledon(LED1);
DigitalOut ledoff(LED2);
bool buttonDown = false;

int main() {
    while (true) {
    if (BlueBttn) {
        if (!buttonDown) {
            ledon = !ledon; 
             buttonDown = true; 
            wait_us(10);
            }
        } else {
            buttonDown = false;
            ledoff = !ledoff; 
            wait_us(10);
        }
    }
}
