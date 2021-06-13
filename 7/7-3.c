#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, j, k, aa, bb, max, n = 10, a[10], b[10];

    //乱数生成
    for (i = 0; i < n; i++) {
        a[i] = rand() % 100;
        b[i] = rand() % 100;
    }
    printf("sort1:\n");

    //乱数表示
    for (j = 0; j < n; j++) {
        printf("%3d ", a[j]);
    }
    printf("\n");

    //並べ替え、直接法
    for (i = 0; i < n; i++) {
        max = a[i];  // 0番目のをmaxとする
        k = i;       //インデックスを入れる

        //自分より一つ先のエージェントから最後のエージェントまで
        for (j = i + 1; j < n; j++) {
            if (a[j] > max) {
                k = j;       //インデックスをMaxのとこにする
                max = a[j];  //
            }
        }
        if (k != i) {     // kがiじゃなければ
            aa = a[i];    //
            a[i] = a[k];  //入れ替える
            a[k] = aa;
        }
    }
    for (j = 0; j < n; j++) {
        printf("%3d ", a[j]);
    }
    printf("\n");

    //乱数表示2コメ
    printf("sort2:\n");
    for (j = 0; j < n; j++) {
        printf("%3d ", b[j]);
    }
    printf("\n");

    //並べ替え、直接法
    for (i = 0; i < n; i++) {
        //後ろの範囲が1ずつ小さくなっていく
        //ここで最小の値が一番右に行くので次以降、一番右は考えなくていい
        for (j = 0; j < n - i - 1; j++) {
            if (b[j] < b[j + 1]) {
                aa = b[j];
                b[j] = b[j + 1];
                b[j + 1] = aa;
            }
            for (bb = 0; bb < n; bb++) {
                printf("%3d ", b[bb]);
            }
            printf("\n");
        }
        printf("change\n");
    }
    // for (j = 0; j < n; j++) {
    //     printf("%3d ", b[j]);
    // }
    // printf("\n");
    return 0;
}