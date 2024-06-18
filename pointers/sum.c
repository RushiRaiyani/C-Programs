#include<stdio.h>
//Calculate sum of two numbers using pointer.
void main(){
    int a,b,*p1,*p2;
    printf("enter 2 numbers:");
    scanf("%d %d", &a,&b);
    p1=&a;
    p2=&b;
    printf("sum is %d", *p1+*p2);
}