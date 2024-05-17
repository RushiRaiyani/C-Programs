#include<stdio.h>
//Check whether number is even number or odd number using conditional operator.
void main() {

    int n;
    printf("enter a number:");
    scanf("%d", &n);

    n%2 == 0 ? printf("number is even") : printf("number is odd");
}