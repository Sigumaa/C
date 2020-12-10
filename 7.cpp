#include "mbed.h"

Serial pc(USBTX, USBRX);

int main() {
    for (int a = 1; a <= 9; a++) {
        pc.printf("\n");
        for (int b = 1; b <= 9; b++) {
            pc.printf("%3d", a * b);
        }
    }
}
