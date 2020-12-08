#include "mbed.h"

Serial pc(USBTX, USBRX);

int main()
{
    int n;
    scanf("%d", &n);
    if(2 <= n && n <= 100){
        printf("%d\n", n * (n + 1) / 2);
    }
    else{
        printf("なにか間違えてないかな？\n");
    }

}