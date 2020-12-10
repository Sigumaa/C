#include "mbed.h"

Serial pc(USBTX, USBRX);
DigitalOut led1(LED1);
DigitalOut led2(LED2);

int main() {
    int n;
    pc.scanf("%d", &n);
    if(n == 9){
        pc.printf("n is 9\n");
        led1 = 1;
    } else if(0 <= n && n <= 100){
        pc.printf("n is not 9\n");
        led2 = 1;
    }
    else{
        pc.printf("なにか間違えてないかな？\n");
    }

}