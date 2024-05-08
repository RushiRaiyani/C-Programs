#include<stdio.h>
//Check whether the given number is perfect or not.
void main(){
int n,sum=0,i=1;
printf("enter a number:");
scanf("%d", &n);
while(i<n){
if(n%i==0){
    sum=sum+i;
}
i++;
}
if(sum==n){
    printf("perfect number");
}
else{
    printf("not a perfect number");
}
}