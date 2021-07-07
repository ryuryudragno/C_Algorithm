#include <stdio.h>
int main(int argc, char *argv[]) {
    int i;
    printf("Number (argc) -> %d\n", argc);
    for (i = 0; i < argc; i++) {
        printf("content[%d] -> %s\n", i, argv[i]);
    }
    return 0;
}