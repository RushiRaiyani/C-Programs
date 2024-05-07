#include<stdio.h>
//Check whether the given number is Armstrong or not.
void main() {
    int n,count=0,m,x,power=1,i,ans=0;
    float po;
    printf("enter a number:");
    scanf("%d", &n);
    m=n;
    while(n!=0){
        x=n%10;
        count++;
        n=n/10;
    }
    n=m;
    while(m!=0){
        x=m%10;
        power=1;
        for(i=1;i<=count;i++){
            power=power*x;
        }
        m=m/10;
        ans=ans+power;
    }
    if(ans==n){
        printf("given number is armstrong");
    }
    else{
        printf("given number is not armstrong");
    }
}