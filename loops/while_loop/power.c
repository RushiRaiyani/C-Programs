#include<stdio.h>
//Calculate 𝑥𝑦 without using power function.
void main(){

    int a,b,i=1;
    long int ans=1;
    printf("enter a anad b for a^b:");
    scanf("%d %d", &a,&b);
    while(i<=b){
        ans=ans*a;
        i++;
    }
    printf("a^b is %d^%d :%ld", a,b,ans);
}