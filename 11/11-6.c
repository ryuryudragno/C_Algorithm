#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"

void mat_read(Matrix *a, int n, int m);
void mat_print(Matrix *a, int n, int m);
void mat_add(Matrix *a, Matrix *b, Matrix *c, int n, int m);
void mat_product(Matrix *a, Matrix *b, Matrix *c, int n, int m, int r);
int main() {
    int n, m, r;
    Matrix *A, *B, *C, *D;

    printf("n m r?\n");
    scanf("%d %d %d", &n, &m, &r);
    A = matalloc(n, m);
    B = matalloc(n, m);
    C = matalloc(m, r);
    D = matalloc(n, r);
    printf("Matrix A\n");
    mat_read(A, n, m);
    mat_print(A, n, m);
    printf("Matrix B\n");
    mat_read(B, n, m);
    mat_print(B, n, m);
    printf("Matrix C\n");
    mat_read(C, m, r);
    mat_print(C, m, r);
    printf("Matrix A + B\n");
    mat_add(A, B, D, n, m);
    mat_print(D, n, m);
    printf("Matrix A * C\n");
    mat_product(A, C, D, n, m, r);
    mat_print(D, n, r);
    matfree(A);
    matfree(B);
    matfree(C);
    matfree(D);
    return 0;
}

void mat_read(Matrix *a, int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("[%2d][%2d] ->", i + 1, j + 1);
            scanf("%lf", &a->mat[j + i * m]);
        }
    }
}
void mat_print(Matrix *a, int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%4.1f ", a->mat[j + i * m]);
        }
        printf("\n");
    }
}
void mat_add(Matrix *a, Matrix *b, Matrix *c, int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            c->mat[j + i * m] = a->mat[j + i * m] + b->mat[j + i * m];
        }
    }
}
void mat_product(Matrix *a, Matrix *b, Matrix *c, int n, int m, int r) {
    int i, j, k;
    double sum;
    for (i = 0; i < n; i++) {
        for (j = 0; j < r; j++) {
            sum = 0;
            for (k = 0; k < m; k++) {
                sum = sum + a->mat[k + i * m] * b->mat[j + k * r];
            }
            c->mat[j + i * r] = sum;
        }
    }
}