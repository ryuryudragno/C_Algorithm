#include <stdio.h>
int main() {
    union {
        int a[4];
        double b[2];
    } uni;
    printf("sizeof(int) -> %ld\n", sizeof(int));
    printf("sizeof(double) -> %ld\n", sizeof(double));
    printf("sizeof(uni) -> %ld\n", sizeof(uni));
    printf("sizeof(uni.a) -> %ld\n", sizeof(uni.a));
    printf("sizeof(uni.b) -> %ld\n", sizeof(uni.b));
    printf("address of uni -> %p\n", &uni);
    printf("address of uni.a[0] -> %p\n", &uni.a[0]);
    printf("address of uni.a[1] -> %p\n", &uni.a[1]);
    printf("address of uni.a[2] -> %p\n", &uni.a[2]);
    printf("address of uni.a[3] -> %p\n", &uni.a[3]);
    printf("address of uni.b[0] -> %p\n", &uni.b[0]);
    printf("address of uni.b[1] -> %p\n", &uni.b[1]);
    return 0;
}