#include <math.h>
#include <stdio.h>
int main() {
    int i;
    int NMAX = 100;
    double x0, x1, f, df, e;
    printf("Initial x?\n");
    scanf("%lf", &x0);
    e = 0.00001;
    for (i = 1; i <= NMAX; i++) {
        f = 2 * x0 * x0 * x0 + 5 * x0 * x0 - 3 * x0 - 6;
        df = 6 * x0 * x0 + 10 * x0 - 3;
        x1 = x0 - f / df;  //次のx0
        printf("%d: x = %.9f, f= %.9f\n", i, x0, f);
        if (fabs((x0 - x1) / x0) < e) {
            break;
        } else {
            x0 = x1;
        }
    }
    printf("x = %f\n f(x) is %f\n", x0, f);
    return 0;
}