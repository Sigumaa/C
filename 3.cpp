#include "mbed.h"

Serial pc(USBTX, USBRX);
DigitalOut led1(LED1);
DigitalOut led2(LED2);

int main() {
    int n;
    pc.scanf("%d", &n);//シミュレータではpc.を消す
    if(n >= 3 && n < 5){
        pc.printf("n is between 3 and 5.\n");
        led1 = 1;
    } else if(0 <= n && n <= 100){
        pc.printf("n is not between 3 and 5.\n");
        led2 = 1;
    }
    else{
        pc.printf("なにか間違えてないかな？\n");
    }

}