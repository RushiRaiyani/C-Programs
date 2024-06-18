#include<stdio.h>
#include<time.h>
int main()
{
    time_t tm;
    time(&tm);
    printf("Current Date/Time = %s", ctime(&tm));
    getch();
    return 0;
}