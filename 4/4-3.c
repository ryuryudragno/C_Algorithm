#include <stdio.h>

int main() {
    int a, max, min, i;
    printf("Enter a number (1).\n");
    scanf("%d", &max);
    min = max;
    i = 1;
    do {
        printf("Enter a number (%d).\n", i + 1);
        scanf("%d", &a);
        if (a > max) max = a;
        if (a < min) min = a;
        i = i + 1;
    } while (i < 10);
    printf("Max is %d, Min is %d\n", max, min);
    return 0;
}