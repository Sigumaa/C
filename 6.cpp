#include "mbed.h"

DigitalOut led1(LED1);
DigitalIn button1(BUTTON1);

int main() {

    while (true) {
        wait_ms(10);
        if (button1) {
            led1 = 1;
        }
        else {
            led1 = 0;
        }
    }
}