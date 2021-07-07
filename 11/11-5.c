#include <math.h>
#include <stdio.h>

#include "c9_12.h"  // 関数群のヘッダーファイル 名

int main(void) {
    double x1, y1, x2, y2, x3, y3;
    int m, n;
    double a[10], b[10], p_x1, p_y1, r_x1, r_y1;
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
    printf("|z1| = %.3f\n", c_abs(x1, y1));
    printf("/_z1 = %.3f\n", c_arg(x1, y1));
    c_pow(x1, y1, n, &x3, &y3);
    printf("(z1)^%d = %.3f %+.3f i\n", n, x3, y3);
    printf("\n");
    printf("Order of polynominal p(x) ->");
    scanf("%d", &n);
    poly_input(a, n);
    printf("Order of polynominal q(x) ->");
    scanf("%d", &m);
    poly_input(b, m);
    printf("\n");
    printf("r(x)=\n");
    rat_display(a, b, n, m);
    printf("\n");
    c_rat_eval(a, b, n, m, x1, y1, &r_x1, &r_y1);
    printf("r(z1) = %.3f %+.3f i\n", r_x1, r_y1);
    return 0;
}