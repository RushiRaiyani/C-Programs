#include<stdio.h>
//Find whether the given number is prime or not using flag.
void main() {
int n,i=2,flag=0;
printf("enter a number:");
scanf("%d", &n);
while(i<=n/2){
    if(n%i==0){
        flag=1;
        break;
    }
    i++;
}
if(flag==0){
    printf("%d is prime number", n);
}
else{
    printf("%d is not a prime number", n);
}
}