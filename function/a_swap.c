#include<stdio.h>
//Swap two numbers using call by reference.
void swap1(int *a,int *b);
void main(){
    int a,b;
    printf("enter 2 numbers:");
    scanf("%d %d", &a,&b);
    swap1(&a,&b);
    printf("swap using call by reference:");
    printf("%d\t%d", a,b);
}

void swap1(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}