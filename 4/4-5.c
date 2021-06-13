#include <stdio.h>
int main() {
    int a1, a2, a3, n, N;
    printf("a1, a2, N?\n");
    scanf("%d %d %d", &a1, &a2, &N);
    for (n = 1; n <= N; n++) {
        printf("a%d = %d\n", n, a1);
        a3 = a1 + a2;
        a1 = a2;
        a2 = a3;
    }
    return 0;
}