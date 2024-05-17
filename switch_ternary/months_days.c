#include<stdio.h>
//Print number of days in a month using switch.
void main() {

int month;
printf("enter a month(1-12):");
scanf("%d", &month);

switch(month) {
        case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("month have 31 days\n");
		break;
		case 4:
		case 6:
		case 9:
		case 11:printf("month have 30 days\n");
		break;
                case 2:printf("month has 28 days");
                break;
		default:printf("enter a valid number");
}
}