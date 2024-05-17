#include<stdio.h>
//Read 3 numbers, multiply largest number from first two numbers to third one using switch.
void main() {

int a,b,c,ans,max;
printf("enter 3 numbers:");
scanf("%d %d %d", &a, &b, &c);

if(a>b){
    max=0;
}
else{
    max=1;
}
switch(max){
    case 0: printf("%d", a*c);
              break;
    case 1: printf("%d", b*c);
              break;          
}
}