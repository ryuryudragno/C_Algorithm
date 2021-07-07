#include <stdio.h>
#include <time.h>
int main(void) {
    char oldname[20], now_time[20], today_date[20], newname[30];
    time_t timer;
    struct tm *t_st;
    time(&timer);
    t_st = localtime(&timer);
    strftime(now_time, 12, "%T", t_st);
    strftime(today_date, 12, "%Y_%m_%d", t_st);
    printf("%s\n", now_time);
    printf("%s\n", today_date);
    printf("File name ->");
    scanf("%s", oldname);
    sprintf(newname, "%s_%s.txt", oldname, today_date);
    rename(oldname, newname);
    printf("%s\n", newname);
    return 0;
}