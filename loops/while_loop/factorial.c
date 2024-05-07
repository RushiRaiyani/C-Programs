#include<stdio.h>
//Find factorial of the given number.
void main(){

    int n,i=1,ans=1;
    printf("enter a number:");
    scanf("%d", &n);

    while(i<=n){
        ans=ans*i;
        i++;
    }
    printf("factorial of %d is %d", n,ans);
}