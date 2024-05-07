#include<stdio.h>
//Convert decimal number to binary. (i.e. n=11  output: 1101)
void main() {
int n,place=1,bin=0,rem;
printf("enter a number:");
scanf("%d", &n);
printf("binary of decimal number %d is ", n);
while(n!=0){
    rem=n%2;
    n=n/2;
    bin=bin+(rem*place);
    place=place*10;
}
printf("%d", bin);
}