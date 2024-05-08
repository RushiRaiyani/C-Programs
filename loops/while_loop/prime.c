#include<stdio.h>
//Find whether the given number is prime or not.
void main() {

int n,count=0,i=2;
printf("enter a number:");
scanf("%d", &n);
while(i<=n/2){
if(n%i==0){
    count++;
}
i++;
}
if(count>=1){
    printf("given number is not prime number");
}
else{
    printf("given number is prime number");
}
}