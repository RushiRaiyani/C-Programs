#include<stdio.h> 
//bitwise operator
void main() {
	int num;
	printf("enter a number:");
	scanf("%d", &num);
	         
	if((num & 1) == 0) {
	 	printf("number is even");
	}
	else{
	printf("number is odd");
	}
	
}