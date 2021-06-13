#include <stdio.h>
int main() {
    int a, b, c, d1, d2, e;
    printf("a, b? (a,b > 0)\n");
    scanf("%d %d", &a, &b);
    c = a;
    e = 1;
    while (e != 0) {
        d1 = c % a;
        d2 = c % b;
        e = d1 + d2;
        c = c + 1;
    }
    printf("LCM is %d.\n", c - 1);
    return 0;
}