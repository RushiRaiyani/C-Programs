#include<stdio.h>
//Find out sum of first and last digit of a given number.
void  main() {

    int n,first,last;
    printf("enter a number:");
    scanf("%d", &n);
    last=n%10;
    while(n>=10){
        n=n/10;
    }
    first=n;
    printf("sum of first and last digit is %d", first+last);
}