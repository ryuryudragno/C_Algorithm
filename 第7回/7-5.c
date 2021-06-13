#include <math.h>
#include <stdio.h>
#define N 10
double poly_read(double a[N], int n);
double poly_print(double a[N], int n);
double poly_diff(double a[N], int n, double b[N]);
double poly_int(double a[N], int n, double c[N]);
double poly_eval(double a[N], int n, double x0);

int main() {
    int n;
    double A[N], B[N], C[N], x0;
    printf("n, x0?\n");
    //次数、x_0入力
    scanf("%d %lf", &n, &x0);
    //入力待ち
    poly_read(A, n);

    //そのまま表示
    printf("\nf(x)=");
    poly_print(A, n);

    //微分
    printf("\ng(x)=f'(x)=");
    poly_diff(A, n, B);
    poly_print(B, n - 1);

    //積分
    printf("\nh(x)=int_f(x)=");
    poly_int(A, n, C);
    poly_print(C, n + 1);

    // x_0入れたら
    printf("\n");
    printf("f(%.1f)=%.3f\n", x0, poly_eval(A, n, x0));
    printf("g(%.1f)=%.3f\n", x0, poly_eval(B, n - 1, x0));
    printf("h(%.1f)=%.3f\n", x0, poly_eval(C, n + 1, x0));
    return 0;
}

//入力待ち
double poly_read(double a[N], int n) {
    int i;
    for (i = n; i >= 0; i--) {
        printf("a[%d] ->", i);
        scanf("%lf", &a[i]);
    }
    return 0;
}

//関数をそのまま表示
double poly_print(double a[N], int n) {
    int i;
    //最高次数のみ表示
    printf("%.2f*x^%d", a[n], n);

    //それ以外表示
    for (i = n - 1; i >= 0; i--) {
        printf("%+.2f*x^%d", a[i], i);
    }
    return 0;
}

//微分
double poly_diff(double a[N], int n, double b[N]) {
    int i;
    for (i = n; i > 0; i--) {
        b[i - 1] = a[i] * i;
    }
    return 0;
}

//積分
double poly_int(double a[N], int n, double c[N]) {
    int i;
    for (i = n; i >= 0; i--) {
        c[i + 1] = a[i] / (i + 1);
    }
    return 0;
}

//値計算
double poly_eval(double a[N], int n, double x0) {
    int i;
    double sum = a[0];
    for (i = 1; i <= N; i++) {
        sum = sum + pow(x0, i) * a[i];
    }
    return sum;
}