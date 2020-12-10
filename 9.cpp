#include "mbed.h"

Serial pc(USBTX, USBRX);
DigitalOut led(LED1);


void flash() {
    led = 1;
    wait_ms(10);
    led = 0;
}

int main() {
    while (true) {
        flash();
        wait_ms(1000);
    }
}