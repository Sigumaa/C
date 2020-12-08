#include "mbed.h"
PwmOut led1(p5);

int main() {
    for (float i = 1.0; i >= 0.0; i -= 0.1) {
        led1 = i;
        wait_ms(1000);
    }
}