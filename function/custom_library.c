#include<stdio.h>
#include"custom_header.h"
void main() {
    int a,b,res,i;
    printf("enter a number:");
    scanf("%d", &a);
    res=prime(a);
    if(res!=-1){
    printf("%d is prime number\n", a);
    }
    else{
        printf("%d is not prime number\n",a);
    }

    res=perfect(a);
    if(res==1){
    printf("%d is perfect number\n", a);
    }
    else{
        printf("%d is not perfect number\n",a);
    }
    
    res=arm(a);
    if(res==1){
        printf("%d is armstrong", a);
    }
    else{
        printf("%d is not armstrong", a);
    }
}

