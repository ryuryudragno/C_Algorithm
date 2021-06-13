#include <stdio.h>
int main() {
    int i, j, n;
    printf("Dimension?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j)
                printf("%d", 1);
            else
                printf("%d", 0);
        }
        printf("\n");
    }
    return 0;
}