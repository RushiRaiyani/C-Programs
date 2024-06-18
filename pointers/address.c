#include<stdio.h>
//Print value and address of a variable.
void main() {
    int n;
    printf("enter number n:");
    scanf("%d", &n);
    printf("address is :%d\n", &n);
    printf("value of variable is %d", n);
    
}