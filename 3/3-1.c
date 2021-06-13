#include <stdio.h>

int main(void)
{
    int a, b, x1, x2, x3, x4, x5, x6;

    printf("input a and b\n");
    scanf("%d %d", &a, &b);
    x1 = a == b;
    x2 = a != b;
    x3 = a < b;
    x4 = a > b;
    x5 = a <= b;
    x6 = a >= b;
    printf("a==b is %d\n", x1);
    printf("a!=b is %d\n", x2);
    printf("a<b is %d\n", x3);
    printf("a>b is %d\n", x4);
    printf("a<=b is %d\n", x5);
    printf("a>=b is %d\n", x6);
    return 0;
}