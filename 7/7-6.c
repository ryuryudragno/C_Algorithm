#include <stdio.h>
#include <stdlib.h>
#define N 10
/* クイックソート */
void q_sort(int a[], int left, int right) {
    int i_p, l, r;
    int pivot;
    int i;
    l = left;
    r = right;
    pivot = a[l];    // ピボット
    while (l < r) {  // 大小関係の比較と交換
        for (i = 0; i < N; i++) {
            printf("%3d ", a[i]);
        }
        printf("\n initial state \n\n");

        //右端が選んだ数字より小さい時は一個左へ進む(何もしない)
        while ((a[r] <= pivot) && (l < r)) {
            r--;
        }
        //そうじゃない時、選んだ数字と同じじゃないやつだったら
        if (l != r) {
            a[l] = a[r];
            l++;
        }

        for (i = 0; i < N; i++) {
            printf("%3d ", a[i]);
        }
        printf("\n l = %d r = %d pivot = %d", l, r, pivot);
        printf("\n change1 \n\n");

        //左端が基準点より大きい時は一個右へ進む(何もしない)
        while ((a[l] >= pivot) && (l < r)) {
            l++;
        }
        //そうじゃない時、選んだ数字と同じじゃないやつだったら
        if (l != r) {
            a[r] = a[l];
            r--;
        }
        for (i = 0; i < N; i++) {
            printf("%3d ", a[i]);
        }
        printf("\n l = %d r = %d pivot = %d", l, r, pivot);
        printf("\n change2 \n\n\n");
    }
    a[l] = pivot;  // rの位置にpibotを入れる

    i_p = l;    // i_p = 9
    l = left;   // l = 0
    r = right;  // r = 9

    printf("\n l = %d r = %d  i_p = %d", l, r, i_p);
    printf("\n nextstep \n\n\n");

    if (l < i_p) {
        q_sort(a, l, i_p - 1);  //左の配列をソート
        if (r > i_p) {
            q_sort(a, i_p + 1, r);  //右の配列をソート
        }
    }
}

int main() {
    int i, a[N];
    int n = 0;

    // 10個の乱数生成
    for (i = 0; i < N; i++) {
        a[i] = rand() % 70;
    }
    for (i = 0; i < N; i++) {
        printf("%3d ", a[i]);
    }
    printf("\n");

    printf("quick sort\n");
    //並べ替え
    q_sort(a, 0, N - 1);
    for (i = 0; i < N; i++) {
        printf("%3d ", a[i]);
    }
    printf("\n");
    return (0);
}