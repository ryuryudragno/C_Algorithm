#include <stdio.h>
int main() {
    int a, b, m, n, r;
    printf("a, b? (a, b > 0)\n");
    scanf("%d %d", &a, &b);
    m = a;
    n = b;
    do {
        r = m % n;
        m = n;
        n = r;
    } while (r != 0);
    printf("GCD is %d .\n", m);
    return 0;
}