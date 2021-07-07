/* matrix.c */
#include "matrix.h"

#include <stdlib.h>

// 行列の領域を確保する関数
Matrix *matalloc(int m, int n) {
    Matrix *a;
    a = (Matrix *)malloc(sizeof(Matrix));
    if (a == 0) {
        return (Matrix *)0;  // 領域を確保できないと 0 を返す
    }

    a->row = m;
    a->col = n;
    a->mat = (double *)malloc(sizeof(double) * m * n);

    if (a->mat == 0) {
        return (Matrix *)0;  // 領域を確保できないと 0 を返す
    }
    return a;
}
// 行列の領域を解放する関数
void matfree(Matrix *a) {
    free((void *)a->mat);
    free((void *)a);
}