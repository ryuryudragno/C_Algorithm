#include <math.h>
#include <stdio.h>
// 和
void c_add(double y2, double x1, double y1, double x2, double *x3, double *y3) {
    *x3 = x1 + x2;
    *y3 = y1 + y2;
}
// 差
void c_sub(double y2, double x1, double y1, double x2, double *x3, double *y3) {
    *x3 = x1 - x2;
    *y3 = y1 - y2;
}
// 積
void c_mul(double y2, double x1, double y1, double x2, double *x3, double *y3) {
    *x3 = (x1 * x2 - y1 * y2);
    *y3 = (y1 * x2 + x1 * y2);
}

// 商
void c_div(double y2, double x1, double y1, double x2, double *x3, double *y3) {
    *x3 = (x1 * x2 + y1 * y2) / (x2 * x2 + y2 * y2);
    *y3 = (y1 * x2 - x1 * y2) / (x2 * x2 + y2 * y2);
}

// 絶対値
double c_abs(double x1, double y1) { return sqrt(x1 * x1 + y1 * y1); }
// 角度
double c_arg(double x1, double y1) { return atan2(y1, x1); }
// べき乗
void c_pow(double x1, double y1, int n, double *x3, double *y3) {
    double a, arg;
    a = c_abs(x1, y1);
    arg = c_arg(x1, y1);
    *x3 = pow(a, n) * cos(n * arg);
    *y3 = pow(a, n) * sin(n * arg);
}
int main() {
    double x1, y1, x2, y2, x3, y3;
    int n;
    printf("x1 y1 = ");
    scanf("%lf %lf", &x1, &y1);
    printf("x2 y2 = ");
    scanf("%lf %lf", &x2, &y2);
    printf("n = ");
    scanf("%d", &n);
    printf("z1 = %.3f %+.3f i\n", x1, y1);
    printf("z2 = %.3f %+.3f i\n", x2, y2);
    c_add(x1, y1, x2, y2, &x3, &y3);
    printf("z1 + z2 = %.3f %+.3f i\n", x3, y3);
    c_sub(x1, y1, x2, y2, &x3, &y3);
    printf("z1 - z2 = %.3f %+.3f i\n", x3, y3);
    c_mul(x1, y1, x2, y2, &x3, &y3);
    printf("z1 * z2 = %.3f %+.3f i\n", x3, y3);
    c_div(x1, y1, x2, y2, &x3, &y3);
    printf("z1 / z2 = %.3f %+.3f i\n", x3, y3);
    c_pow(x1, y1, n, &x3, &y3);
    printf("(z1)^%d = %.3f %+.3f i\n", n, x3, y3);
    printf("|z1| = %.3f\n", c_abs(x1, y1));
    printf("/_z1 = %.3f\n", c_arg(x1, y1));

    return 0;
}