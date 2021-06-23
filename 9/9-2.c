#include <math.h>
#include <stdio.h>
void poly_input(double a[10], int n) {
    int i;
    for (i = n; i >= 0; i--) {
        printf("a_%d->", i);
        scanf("%lf", &a[i]);
    }
}
void poly_display(double a[10], int n) {
    int i;
    for (i = n; i > 0; i--) {
        printf("%+.2fx^%d", a[i], i);
    }
    printf("%+.2f\n", a[0]);
}
void rat_display(double a[10], double b[10], int n, int m) {
    int i;
    poly_display(b, m);
    for (i = 0; i <= n; i++) {
        printf("--------");
    }
    printf("\n");
    poly_display(a, n);
}

void c_div(double x1, double y1, double x2, double y2, double *x3, double *y3) {
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

void c_poly_eval(double a[10], int n, double x0, double y0, double *p_x0,
                 double *p_y0) {
    int i;
    double x1, y1;
    *p_x0 = 0.0;
    *p_y0 = 0.0;
    for (i = n; i >= 0; i--) {
        c_pow(x0, y0, i, &x1, &y1);
        *p_x0 += a[i] * x1;
        *p_y0 += a[i] * y1;
    }
}
void c_rat_eval(double a[10], double b[10], int n, int m, double x0, double y0,
                double *r_x0, double *r_y0) {
    double p_x0, p_y0, q_x0, q_y0;
    c_poly_eval(a, n, x0, y0, &p_x0, &p_y0);
    c_poly_eval(b, m, x0, y0, &q_x0, &q_y0);

    c_div(q_x0, q_y0, p_x0, p_y0, r_x0, r_y0);
}

int main() {
    int m, n;
    double a[10], b[10], x0, y0, p_x0, p_y0, r_x0, r_y0;
    printf("Order of polynominal p(x) ->");
    scanf("%d", &n);
    poly_input(a, n);
    printf("Order of polynominal q(x) ->");
    scanf("%d", &m);
    poly_input(b, m);
    printf("\n");
    printf("p(x)=\n");
    poly_display(a, n);
    printf("\n");
    printf("r(x)=\n");
    rat_display(a, b, n, m);
    printf("\n");
    printf("x0 y0 = ");
    scanf("%lf %lf", &x0, &y0);
    printf("\n");
    printf("z0 = %.3f %+.3f i\n", x0, y0);
    c_poly_eval(a, n, x0, y0, &p_x0, &p_y0);
    printf("p(z0) = %.3f %+.3f i\n", p_x0, p_y0);
    c_rat_eval(a, b, n, m, x0, y0, &r_x0, &r_y0);
    printf("r(z0) = %.3f %+.3f i\n", r_x0, r_y0);
    return 0;
}