#include <math.h>
#include <stdio.h>
int main() {
    int i;
    int NMAX = 100;
    double xl, xm, xr, fl, fm, fr, e, xm1, xm2;
    printf("xl xr\n");
    scanf("%lf %lf", &xl, &xr);
    e = 0.00001;  //この値より小さくなったら終了
    for (i = 0; i < NMAX; i++) {
        xm = (xl + xr) / 2;
        fl = xl * xl - 10 * sin(xl) - 5;
        fm = xm * xm - 10 * sin(xm) - 5;
        fr = xr * xr - 10 * sin(xr) - 5;
        printf("%d: xm = %f, f = %f\n", i, xm, fm);

        //左端と中点かけて-だったら、右端を真ん中にする
        if (fl * fm < 0) {
            xr = xm;
        } else if (fm * fr < 0) {
            xl = xm;
        } else if (fm == 0) {
            break;
        }
        xm1 = xm;
        xm2 = (xl + xr) / 2;

        //前回の中点からの変化量が0.00001以下なら終了
        if (fabs((xm1 - xm2) / xm1) < e) {
            break;
        }
    }
    printf("x = %f\n f(x) is %f\n", xm, fm);
    return 0;
}