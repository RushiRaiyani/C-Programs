#include<stdio.h>
//Print given number in reverse order.
void main() {

    int n,x;
    printf("enter a number:");
    scanf("%d", &n);
    while(n!=0) {
        x=n%10;
        printf("%d", x);
        n=n/10;
    }
}