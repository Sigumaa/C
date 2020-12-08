#include "mbed.h"

Serial pc(USBTX, USBRX);
DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);
DigitalOut led4(LED4);

int main()
{
    int n;
    scanf("%d", &n);
    switch (n)
    {
        case 1:
            led1 = 1;
            break;
        case 2:
            led1 = 1;
            led2 = 1;
            break;
        case 3:
            led1 = 1;
            led2 = 1;
            led3 = 1;
            break;
        case 4:
            led1 = 1;
            led2 = 1;
            led3 = 1;
            led4 = 1;
            break;
        default:
            printf("?\n");
            break;
    }
}