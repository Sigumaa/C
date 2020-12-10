#include "mbed.h"

Serial pc(USBTX, USBRX);
DigitalOut led1(LED1);
DigitalOut led2(LED2);

int main() {
    int a[5];
    int i;
    for (i = 0; i < 5; i++) {
        pc.scanf("%d" , &a[i]); //シミュレータではpc.があると動きません。
    }
    for (i = 0; i < 5; i++) {
        switch(a[i]) {
            case 0:
                led1 = 0;
                led2 = 0;
                break;
            case 1:
                led1 = 1;
                led2 = 0;
                break;
            case 2:
                led1 = 0;
                led2 = 1;
                break;
            case 3:
                led1 = 1;
                led2 = 1;
                break;
            default:
                pc.printf("?\n");
                break;

        }
        wait_ms(1000);
    }
}