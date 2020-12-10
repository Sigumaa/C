#include "mbed.h"

Serial pc(USBTX, USBRX);

int main() {
    int n;
    pc.scanf("%d", &n);
    if(2 <= n && n <= 100){
        pc.printf("%d\n", n * (n + 1) / 2);
    }
    else{
        pc.printf("なにか間違えてないかな？\n");
    }

}