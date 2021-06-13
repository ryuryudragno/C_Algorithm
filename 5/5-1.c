#include <stdio.h>
int main() {
    int x0, x1, i, a, b, m;
    int y;
    a = 2045;
    m = 32768;
    b = 9378;
    x0 = 1;
    printf("Jozan\n");
    for (i = 0; i < 20; i++) {
        x1 = (a * x0) % m;
        y = x1 * 10 / m;
        printf("%d: %d\n", i + 1, y);
        x0 = x1;
    }
    printf("Senkei\n");
    for (i = 0; i < 20; i++) {
        x1 = ((a * x0) + b) % m;
        y = x1 * 10 / m;
        printf("%d: %d\n", i + 1, y);
        x0 = x1;
    }
    return 0;
}