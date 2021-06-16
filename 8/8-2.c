#include <stdio.h>
int main(void) {
    int *ip;
    int a;
    ip = &a;
    printf("Input an integer -> ");
    scanf("%d", ip);
    printf("ポインタ型の変数ip = %p\n", ip);
    printf("Square of the integer %d is %d.\n", *ip, *ip * *ip);
    printf("Square of the integer %d is %d.\n\n", a, a * a);
    a = 2;
    printf("Square of the integer %d is %d.\n", *ip, *ip * *ip);
    printf("Square of the integer %d is %d.\n", a, a * a);
    return 0;
}