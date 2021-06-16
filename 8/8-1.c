#include <stdio.h>
int main() {
    int ix = 1, iy = 2;
    double dx = 1.0, dy = 2.0;
    int ax[3] = {3, 4, 5};
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("sizeof(double) = %ld\n", sizeof(double));
    printf("sizeof(int[3]) = %ld\n", sizeof(int[3]));
    printf("sizeof(int[3]) = %ld\n\n", sizeof(double[3]));
    printf("value of ix = %d : address of ix = %p\n", ix, &ix);
    printf("value of iy = %d : address of iy= %p\n\n", iy, &iy);
    printf("value of dx = %f : address of dx= %p\n", dx, &dx);
    printf("value of dy = %f : address of dy= %p\n\n", dy, &dy);
    printf("value of ax[0] = %d : address of ax[0] = %p\n", ax[0], &ax[0]);
    printf("value of ax[1] = %d : address of ax[1] = %p\n", ax[1], &ax[1]);
    printf("value of ax[2] = %d : address of ax[2] = %p\n", ax[2], &ax[2]);
    return 0;
}