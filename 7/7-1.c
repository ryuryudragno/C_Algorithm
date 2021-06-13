#include <stdio.h>
int main()
{
    int i;
    int sum, outgo[12], max, min;
    double average;
    for (i = 0; i < 12; i++)
    {
        printf("%2d's outgo->", i + 1);
        scanf("%d", &outgo[i]);
    }
    sum = 0;
    max = outgo[0];
    min = outgo[0];
    for (i = 0; i < 12; i++)
    {
        sum += outgo[i]; //totalを出す

        //最大値
        if (outgo[i] > max)
        {
            max = outgo[i];
        }
        //最小値
        if (outgo[i] < min)
        {
            min = outgo[i];
        }
    }
    average = (double)sum / 12;
    printf("Total outgo : %d\n", sum);
    printf("Average outgo : %f\n", average);
    printf("max is %d, min is %d\n", max, min);
    return 0;
}