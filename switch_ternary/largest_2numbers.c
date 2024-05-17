#include<stdio.h>
//print largest of 2 numbers
void main() {
    int a,b,n;
    printf("enter number a and b:");
    scanf("%d %d", &a,&b);
    int d=a>b?a:b;
    printf("%d is largest", d);
}