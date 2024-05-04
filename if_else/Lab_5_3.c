#include<stdio.h>
//find number is positive or negative
int main() {

int n;
printf("enter a number :");
scanf("%d", &n);

if(n > 0) {
printf(" number is positive \n");
}
else if(n == 0) {
printf("no is 0 \n");
}
else{
printf("number is negative \n");
}

}