#include <stdio.h>
int main() {
    int i, j, n;
    printf("Hight of pyramid?\n");
    scanf("%d", &n);
    if (n > 0) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n - i; j++) printf(" ");
            for (j = 1; j <= i; j++) printf("* ");
            printf("\n");
        }
    } else if (n < 0) {
        for (i = -1; i >= n; i--) {
            for (j = -1; j > i; j--) printf(" ");
            for (j = -1; j >= n - i - 1; j--) printf("* ");
            printf("\n");
        }
    } else
        printf("error");
    return 0;
}