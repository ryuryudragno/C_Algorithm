#include <stdio.h>
int main() {
    int score, sum, num, ave;
    num = 0;
    sum = 0;
    printf("score?\n");
    while (scanf("%d", &score) != EOF) {
        num = num + 1;
        sum = sum + score;
    }
    printf("Number = %d\n", num);
    printf("Summation score = %d\n", sum);
    printf("Average score = %f\n", (double)sum / num);
    return 0;
}