#include<stdio.h>
//calculator
void main(){

float a,b;
printf("enter a:");
scanf("%f", &a);

char c;
printf("enter sign:");
scanf(" %c", &c);

printf("enter b:");
scanf("%f", &b);

if(c == '+') {
    printf("ans is %f", a + b);
}
else if(c == '-') {
    printf("ans is %f", a - b);
}
else if(c == '*') {
    printf("ans is %f", a * b);
}
else if(c == '/') {
    printf("ans is %f", a / b);
}
else{
    printf("enter a valid sign");
}
}