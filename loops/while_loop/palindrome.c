#include<stdio.h>
//Check whether the given number is palindrome or not
void main() {
    int n,sum=0,temp,max;
    printf("enter a number:");
    scanf("%d", &n);
    max=n;
    while(n!=0){
        temp=n%10;
        sum=sum*10+temp;
        n=n/10;
    }
    if(sum==max){
        printf("number is palindrome");
    }
    else{
        printf("number is not palindrome");
    }
}