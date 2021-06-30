#include <math.h>
#include <stdio.h>
typedef struct {
    double x;
    double y;
} complex;
complex c_add(complex z1, complex z2) {
    complex z3;
    z3.x = z1.x + z2.x;
    z3.y = z1.y + z2.y;
    return z3;
}
complex c_sub(complex z1, complex z2) {
    complex z3;
    z3.x = z1.x - z2.x;
    z3.y = z1.y - z2.y;
    return z3;
}
complex c_mul(complex z1, complex z2) {
    complex z3;
    z3.x = z1.x * z2.x - z1.y * z2.y;
    z3.y = z1.y * z2.x + z1.x * z2.y;
    return z3;
}
complex c_div(complex z1, complex z2) {
    complex z3;
    z3.x = (z1.x * z2.x + z1.y * z2.y) / (z2.x * z2.x + z2.y * z2.y);
    z3.y = (z1.y * z2.x - z1.x * z2.y) / (z2.x * z2.x + z2.y * z2.y);
    return z3;
}
double c_abs(complex z1) { return sqrt(z1.x * z1.x + z1.y * z1.y); }
double c_arg(complex z1) { return atan2(z1.y, z1.x); }
complex c_pow(complex z1, int n) {
    complex z3;
    z3.x = pow(c_abs(z1), n) * cos(n * c_arg(z1));
    z3.y = pow(c_abs(z1), n) * sin(n * c_arg(z1));
    return z3;
}
int main() {
    complex z1, z2, z3;
    int n;
    printf("z1.x z1.y = ");
    scanf("%lf %lf", &z1.x, &z1.y);
    printf("z2.x z2.y = ");
    scanf("%lf %lf", &z2.x, &z2.y);
    printf("n = ");
    scanf("%d", &n);
    printf("z1 = %.3f %+.3f i\n", z1.x, z1.y);
    printf("z2 = %.3f %+.3f i\n", z2.x, z2.y);
    z3 = c_add(z1, z2);
    printf("z1 + z2 = %.3f %+.3f i\n", z3.x, z3.y);
    z3 = c_sub(z1, z2);
    printf("z1 - z2 = %.3f %+.3f i\n", z3.x, z3.y);
    z3 = c_mul(z1, z2);
    printf("z1 * z2 = %.3f %+.3f i\n", z3.x, z3.y);
    z3 = c_div(z1, z2);
    printf("z1 / z2 = %.3f %+.3f i\n", z3.x, z3.y);
    printf("|z1| = %.3f\n", c_abs(z1));
    printf("/_z1 = %.3f\n", c_arg(z1));
    z3 = c_pow(z1, n);
    printf("(z1)^%d = %.3f %+.3f i\n", n, z3.x, z3.y);
    return 0;
}