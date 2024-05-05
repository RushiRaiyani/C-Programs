#include<stdio.h>

int main() {

    int year;
    printf("enter a year :");
    scanf("%d", year);

    if((year % 100 ) == 0) {
        if(year % 400 == 0) {
            printf("year is leap year \n");
        }   
        else{
            printf("not a leap year \n");
        }
    }

    else {
        if((year % 4)==0) {
            printf("year is leap year \n");
    }
        else {
            printf("year is bbb leap year \n");
        }
    }
    return 0;
}