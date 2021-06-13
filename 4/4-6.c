#include <stdio.h>
int main() {
    int a, i, y;
    double r, t;
    printf("Initial, rate, year?\n");
    scanf("%d %lf %d", &a, &r, &y);
    t = a;
    for (i = 1; i <= y; i++) {
        t = t * (1 + r);
        printf("Year %d, total %d\n", i, (int)(t));
    }

    return 0;
}