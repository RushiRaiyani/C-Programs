#include<stdio.h>
/*  Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every hour 
worked above 40 hours. Assume that employees do not work for 
fractional part of an hour  */
void main(){
int i,time,sum=0;
printf("enter time you worked:");
for(i=1;i<=10;i++){
scanf("%d", &time);
sum=sum+time*12;
}
printf("overtime pay for 10 employees is %d", sum);
}