#include "mbed.h"

Serial pc(USBTX, USBRX);


// プロトタイプ宣言
void swap(int *a, int *b);
void printArray(int a[3][3]);
void transposition(int a[3][3]);

// main
int main() {
    int a[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]); // 読み取る
        }
    }
    printArray(a);// 交換前の、aの各値を出力する
    transposition(a);// 交換する
    printf("\n")// 無いと交換前と交換後がつながっちゃう
    printArray(a);// 交換した後のaの各値を出力する

}

// 交換する
void swap(int *a, int *b) {
    int exchange;
    exchange = *a; //*aを入れておく
    *a = *b; //*aを*bにする(日本語弱者でごめんなさい)　・・・１
    *b = exchange;// *bを*aにする　・・・２
    //１　２・・・入れ替わってる！
}


// aの各値を出力する
void printArray(int a[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", a[i][j]);
        }
        printf("\n")
    }
}


// a[i][j]とa[j][i]の値をswapを使って交換する関数(問題文の指示)
void transposition(int a[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            swap(&a[i][j], &a[j][i]);
        }
    }
}

