#include<stdio.h>
/*Perform Addition, Subtraction, Multiplication 
and Division of 2 numbers as per user’s choice using switch.  */
void main() {

float a,b;
printf("enter a numbers:");
scanf("%f", &a);

char c;
printf("enter sign:");
scanf(" %c", &c);

printf("enter 2nd number:");
scanf("%f", &b);

switch(c){
    case '+': printf("ans is :%f", a+b);
              break;
    case '-': printf("ans is :%f", a-b);          
              break; 
    case '*': printf("ans is :%f", a*b);
              break;
    case '/': printf("ans is :%f", a/b);          
              break;
    default: printf("enter a valid sign");       
}
}