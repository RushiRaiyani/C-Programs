#include<stdio.h>
//convert fahrenite to celcuis
void main() {

float f;
printf("enter temp in fahrenite:");
scanf("%f", &f);

float c = ((f - 32) * 5)/9;
printf("temp in celcuis is:%f", c);

}