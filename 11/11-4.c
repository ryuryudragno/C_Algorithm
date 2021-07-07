#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define N 600
#define M 24
int main() {
    int i, j;
    FILE *fp1, *fp2;
    char s1[N], s2[N];
    fp1 = fopen("secretimage1.dat", "r");
    if (fp1 == NULL) {
        printf("Can't Open File 1\n");
        return 0;
    }
    fgets(s1, N, fp1);
    fclose(fp1);
    fp2 = fopen("secretimage2.dat", "r");
    if (fp2 == NULL) {
        printf("Can't Open File 2\n");
        return 0;
    }
    fgets(s2, N, fp2);
    fclose(fp2);
    // 文字列結合
    strcat(s1, s2);
    // '0'->' '
    for (i = 0; i < N; i++) {
        if (s1[i] == '0') {
            s1[i] = ' ';
        }
    }
    // 'O'->'o'
    for (i = 0; i < M * M; i++) {
        s1[i] = tolower(s1[i]);
    }
    // 表示
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            printf("%c", s1[i * M + j]);
        }
        printf("\n");
    }
    return 0;
}