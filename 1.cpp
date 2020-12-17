#include "mbed.h"

Serial pc(USBTX, USBRX);

int main() {
    int n;
    pc.scanf("%d", &n);//シミュレータではpc.を消す
    if(2 <= n && n <= 100){
        pc.printf("%d\n", n * (n + 1) / 2);
    }
    else{
        pc.printf("なにか間違えてないかな？\n");
    }

}