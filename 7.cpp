#include "mbed.h"

Serial pc(USBTX, USBRX);

int main() {
    for (int a = 1; a <= 9; a++) {
        printf("\n");
        for (int b = 1; b <= 9; b++) {
            printf("%3d", a * b);
        }
    }
}
