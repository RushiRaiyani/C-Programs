#include<stdio.h>

//avg of number with scanf
void main() {

int a,b,c;
float d;
printf("Enter 3 numbers:");
scanf("%d %d %d", &a, &b, &c);
d = (a + b + c)/(float)3;
printf("average is %f", d);

}