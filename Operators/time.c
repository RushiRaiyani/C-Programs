#include<stdio.h>
//Convert seconds into hours, minutes & seconds and print in HH:MM:SS. [e.g. 10000 seconds = 02:46:40)]
int main() {

int sec;
printf("enter time in sec :");
scanf("%d", &sec);

int second = sec % 60;

int min;
min = sec / 60;

int hour;
hour = min / 60;

int x = min / 60;
min = min - (60 * x);

printf("hour 2%d : min 2%d : sec 2%d \n", hour, min, second);

return 0;
}
