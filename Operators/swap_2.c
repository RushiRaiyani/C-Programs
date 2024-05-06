#include<stdio.h>
//swap 2 numbers without using temporary variable
void main() {

int a,b;
printf("enter 2 numbers :");
scanf("%d %d", &a, &b);

a = a + b;
b = a - b;
a = a - b;

printf("a : %d and b : %d", a, b);

}
