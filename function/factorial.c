#include<stdio.h>
//Find factorial of a number using function.
int fact(int n);
void main () {
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    printf("factorial of number %d is %d", n,fact(n));
}
int fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}