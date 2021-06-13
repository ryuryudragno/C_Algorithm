#include <stdio.h>
#include <stdlib.h>
int myrand(int x);
int main() {
    int i;
    int m = 32768;
    int rm = 1;
    double x1, y1, x2, y2;
    int sum1 = 0, sum2 = 0;
    double r1, pi1, r2, pi2;
    for (i = 1; i <= 100000; i++) {
        rm = myrand(rm);              // 1個目の乱数
        x1 = (double)rm / (double)m;  //１以下にする
        rm = myrand(rm);              // 2コメの乱数
        y1 = (double)rm / (double)m;

        r1 = x1 * x1 + y1 * y1;  //半径の２条計算
        if (r1 <= 1) {
            sum1 = sum1 + 1;
        }
        pi1 = (double)sum1 / (double)i * 4;  //面積計算

        x2 = (double)(rand()) / ((double)(RAND_MAX) + 1);
        y2 = (double)(rand()) / ((double)(RAND_MAX) + 1);

        r2 = x2 * x2 + y2 * y2;
        if (r2 <= 1) {
            sum2 = sum2 + 1;
        }
        pi2 = (double)sum2 / (double)i * 4;
        if (i % 1000 == 0) {
            // printf("%f, %f\n", x2, y2);
            printf("%d: %f, %f\n", i, pi1, pi2);
        }
    }
    return 0;
}

int myrand(int x) {
    int a = 2045;
    int m = 32768;
    int b = 9378;
    int rm;
    rm = (a * x + b) % m;
    return rm;
}