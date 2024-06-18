#include<stdio.h>
//Find factorial of a number using recursive function.
int fact(int n);
void main() {
int n;
printf("enter a number:");
scanf("%d", &n);
printf("factorial of number %d is %d", n,fact(n));
}
int fact(int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}