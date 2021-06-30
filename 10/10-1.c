#include <stdio.h>
int main() {
    struct {
        int a[4];
        double b[2];
    } str;
    printf("sizeof(int) -> %ld\n", sizeof(int));
    printf("sizeof(double) -> %ld\n", sizeof(double));
    printf("sizeof(str) -> %ld\n", sizeof(str));
    printf("sizeof(str.a) -> %ld\n", sizeof(str.a));
    printf("sizeof(str.b) -> %ld\n", sizeof(str.b));
    printf("address of str -> %p\n", &str);
    printf("address of str.a[0] -> %p\n", &str.a[0]);
    printf("address of str.a[1] -> %p\n", &str.a[1]);
    printf("address of str.a[2] -> %p\n", &str.a[2]);
    printf("address of str.a[3] -> %p\n", &str.a[3]);
    printf("address of str.b[0] -> %p\n", &str.b[0]);
    printf("address of str.b[1] -> %p\n", &str.b[1]);
    return 0;
}