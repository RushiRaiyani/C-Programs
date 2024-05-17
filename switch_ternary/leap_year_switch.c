#include<stdio.h>
//Print number of days in a month considering leap year using switch.
void main() {

	int n,max,c;
	printf("enter a year:");
	scanf("%d", &n);
	
	if(n%4==0 && n%100!=0 || n%400==0) {
		printf("year is leap year \n");
	}
	else{
		printf("year is not leap year\n");
	}
	printf("enter a month number (1-12):\n");
	scanf("%d", &max);
	
	switch(max){
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
		
		case 2:   c=(n%4==0 && n%100!=0 || n%400==0)?29:28;
	 	          printf("month have %d days\n", c);
		break;
			
		deafault: printf("enter a valid number for year\n");
		break;
	}
	
}