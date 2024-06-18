#include<stdio.h>
//Add two numbers using function.
int sum(int x,int y);
void main() {
int a,b,ans;
printf("enter 2 numbers A and B:");
scanf("%d %d", &a,&b);
ans=sum(a,b);
printf("sum is %d", ans);
}
int sum(int x,int y){
    return x+y;
}