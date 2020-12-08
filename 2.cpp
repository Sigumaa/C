#include "mbed.h"

Serial pc(USBTX, USBRX);
DigitalOut led1(LED1);
DigitalOut led2(LED2);

int main() {
    int n;
    scanf("%d", &n);
    if(n == 9){
        printf("n is 9\n");
        led1 = 1;
    } else if(0 <= n && n <= 100){
        printf("n is not 9\n");
        led2 = 1;
    }
    else{
        printf("なにか間違えてないかな？\n");
    }

}