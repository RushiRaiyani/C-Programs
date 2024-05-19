#include<stdio.h>
//Replace a character in given string.
void main() {
int n;
char a[100],b;
printf("enter a string:");
gets(a);
printf("enter a number of digit you want to change:");
scanf("%d", &n);
printf("enter a character:");
scanf(" %c", &b);
a[n-1]=b;
puts(a);
}