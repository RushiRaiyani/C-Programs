#include<stdio.h>
//Find out largest number from given 3 numbers using conditional operator.
void main() {

int a,b,c,d;
printf("enter 3 numbers:");
scanf("%d %d %d", &a, &b, &c);

a>b ? (a>c ? printf("a is largest"):printf("c is largest")) : (b>c ? printf("b is largest"):printf("c is largest"));
}