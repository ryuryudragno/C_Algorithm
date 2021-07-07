#include <math.h>
#include <stdio.h>
int main() {
    FILE *fp1, *fp2;
    int i, j;
    double t[50], u[50], x, y, z;
    fp1 = fopen("input.dat", "r");
    for (i = 0; i < 50; i++) {
        fscanf(fp1, "%lf %lf", &t[i], &u[i]);
    }
    fclose(fp1);
    fp2 = fopen("data.csv", "w");
    for (i = 0; i < 50; i++) {
        for (j = 0; j < 50; j++) {
            x = cos(t[i]) * (3 + cos(u[j]));
            y = sin(t[i]) * (3 + cos(u[j]));
            z = sin(u[j]);
            fprintf(fp2, "%10.6lf,%10.6lf,%10.6lf\n", x, y, z);
        }
    }
    fclose(fp2);
    return 0;
}