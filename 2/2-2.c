#include <stdio.h>
int main() {
    int a, b, c;
    double a2, b2, c2;
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    scanf("%lf %lf", &a2, &b2);
    c2 = a2 + b2;
    printf("a2=%f, b2=%f, c2=%f\n", a2, b2, c2);
    return 0;
}