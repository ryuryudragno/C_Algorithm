#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
    FILE *fp;
    int i;
    char s[101];
    if (argc != 2) {
        printf("Error!\n");
        return 0;
    }
    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Can't open the file!\n");
        return 0;
    }
    for (i = 1; i <= 100; i++) {
        char *c;
        c = fgets(s, 101, fp);
        if (c == NULL) break;
        printf("%3d:%3d:%s", i, (int)strlen(s), s);
    }
    fclose(fp);
    return 0;
}