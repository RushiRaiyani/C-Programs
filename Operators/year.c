#include<stdio.h>
//Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3 days]

void main() {

    int day;
    printf("enter days:");
    scanf("%d", &day);
    int year;
    year = day / 365;
    int week;
    week = day / 7;
    week = week % 52;
    
    day = (day % 365)%7;
    
    printf("%d %d %d", year, week, day);
}
