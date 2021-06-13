#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, d, e, x1, x2, r, i; //変数定義

    printf("a x^2 + b x + c = 0\n");
    printf("a, b, c?\n");             //入力を促す
    scanf("%lf %lf %lf", &a, &b, &c); //入力を受け付ける

    d = b * b - 4 * a * c;     //判別式計算
    r = -b / 2 / a;            //解の実数部分計算
    i = sqrt(fabs(d)) / 2 / a; //判別式の絶対値とルート計算

    if (fabs(d) < 0.000001)
        printf("x = %f\n", r);
    else if (d > 0)
    {
        printf("x = %f, %f\n", r + i, r - i);
    }
    else
    {
        printf("x = %f + %f i, %f - %f i\n", r, i, r, i);
    }
    return 0;
}