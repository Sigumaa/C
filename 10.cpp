#include "mbed.h"

Serial pc(USBTX, USBRX);
DigitalOut led(LED1);

void blink(int, int);

int main() {
    blink(1000, 500);
}

void blink(int on, int off) {
    while (true) {
        led = 1;
        wait_ms(on);
        led = 0;
        wait_ms(off);
    }
}