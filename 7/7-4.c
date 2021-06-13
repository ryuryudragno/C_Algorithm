#include <stdio.h>
#define N 10
void mat_read(double a[N][N], int n, int m);
void mat_print(double a[N][N], int n, int m);
void mat_add(double a[N][N], double b[N][N], double c[N][N], int n, int m);
void mat_product(double a[N][N], double b[N][N], double c[N][N], int n, int m,
                 int r);
int main() {
    int n, m, r;
    double A[N][N], B[N][N], C[N][N], D[N][N];
    printf("n m r?\n");
    scanf("%d %d %d", &n, &m, &r);
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
    return 0;
}

// N*Mの行列を読み込む(入力)
void mat_read(double a[N][N], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%2d, %2d ->", i + 1, j + 1);
            scanf("%lf", &a[i][j]);
        }
    }
}

// N*Mの行列を表示
void mat_print(double a[N][N], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%4.1f ", a[i][j]);
        }
        printf("\n");  //行を変える
    }
}

//足し算
void mat_add(double a[N][N], double b[N][N], double c[N][N], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

//掛け算
void mat_product(double a[N][N], double b[N][N], double c[N][N], int n, int m,
                 int r) {
    int i, j, k;
    double sum;
    for (i = 0; i < n; i++) {
        // 1行にはr個の要素が入る
        for (j = 0; j < r; j++) {
            sum = 0;

            //それぞれの値はm回計算で出る
            for (k = 0; k < m; k++) {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
}