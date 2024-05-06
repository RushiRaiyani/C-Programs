#include<stdio.h>
//calculate simple interest
void main() {

int p,r,t;
printf("enter p, r, t:");
scanf("%d %d %d", &p, &r, &t);

float i =(p * r * t)/(float)100;
printf("simple interest is:%f", i);

}