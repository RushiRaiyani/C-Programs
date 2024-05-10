#include<stdio.h>
//Find factorial of the given number.
void main() {

    int n,fact=1,i;
    printf("enter a number:");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("faactorial of %d is %d", n,fact);
}