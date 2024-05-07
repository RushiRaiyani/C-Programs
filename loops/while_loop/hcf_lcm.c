#include<stdio.h>
//Find HCF and LCM of two numbers.
void main() {
   int a,b,i=2,hcf=1,lcm;
   printf("enter two numbers:");
   scanf("%d %d", &a,&b);
  printf("HCF & LCM of %d & %d is ", a,b);
   while(i<=a && i<=b){
    if(a%i==0 && b%i==0){
       a=a/i;
       b=b/i;
       hcf=hcf*i;
    }
    else{
        i++;
    }
   } 
   printf("%d & ", hcf);
   lcm=hcf*a*b;
   printf("%d", lcm);
}