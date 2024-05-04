#include<stdio.h>
//print largest from 3 numbers
void main() { 

int a,b,c;
printf("enter 3 numbers : ");
scanf("%d %d %d", &a, &b, &c);

if(a > b) {
  if(a > c) {
  printf("a is largest");
  }
  else{
  printf("c is largest");
  }
}
else if(b > c) {
printf("b is largest");
}
else {
printf("c is largest");
}
}