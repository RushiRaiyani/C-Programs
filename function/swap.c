#include<stdio.h>
//Swap two numbers using call by value.
void swap(int a,int b);
void main(){
    int a,b;
    printf("enter 2 numbers:");
    scanf("%d %d", &a,&b);
    swap(a,b);
    }

void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("swap using call by value:\n");
    printf("%d\t%d\n", x,y);
}
