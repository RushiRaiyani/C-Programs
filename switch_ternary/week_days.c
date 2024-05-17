#include<stdio.h>
//Print day name of week using switch.
void main() {

int day;
printf("enter a day (1-7):");
scanf("%d", &day);

switch(day) {
    case 1: printf("day is monday");
            break;
    case 2: printf("day is tuesday");
            break;
    case 3: printf("day is wednesday");
            break;
    case 4: printf("day is thursday");
            break;
    case 5: printf("day is friday");
            break;
    case 6: printf("day is saturday");
            break;
    case 7: printf("day is sunday");
            break;
    default: printf("enter a valid number");
            break;
}
}