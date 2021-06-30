#include <math.h>
#include <stdio.h>
typedef struct {
    double xaxis;
    double yaxis;
} point;
double length(point a, point b) {
    return sqrt((a.xaxis - b.xaxis) * (a.xaxis - b.xaxis) +
                (a.yaxis - b.yaxis) * (a.yaxis - b.yaxis));
}
double area(point a, point b, point c) {
    double s, l, m, n;
    l = length(a, b);
    m = length(b, c);
    n = length(c, a);
    s = (l + m + n) / 2;
    return sqrt(s * (s - l) * (s - m) * (s - n));
}
int main() {
    point a, b, c;
    printf("Point 1? (x y)\n");
    scanf("%lf %lf", &a.xaxis, &a.yaxis);
    printf("Point 2? (x y)\n");
    scanf("%lf %lf", &b.xaxis, &b.yaxis);
    printf("Point 2? (x y)\n");
    scanf("%lf %lf", &c.xaxis, &c.yaxis);

    printf("Length: %.3f, %.3f, %.3f\n", length(a, b), length(b, c),
           length(c, a));
    printf("Area: %.3f\n", area(a, b, c));
    return 0;
}