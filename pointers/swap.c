#include<stdio.h>
//Swap value of two numbers using pointer.
void main(){
    int a,temp,b,*p1,*p2;
    printf("enter 2 numbers:");
    scanf("%d %d", &a,&b);
    p1=&a;
    p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("number a is %d & number b is %d", *p1,*p2);
}