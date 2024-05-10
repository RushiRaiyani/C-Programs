#include<stdio.h>
//Calculate 𝑥𝑦 without using power function and without using multiplication.
void main(){
    int i,j,n,sum=0,a,b;
    printf("enter a and b for a^b:");
    scanf("%d %d", &a,&b);
    n=a;
    for(i=1;i<b;i++){
        sum=0;
        for(j=1;j<=n;j++){
            sum=sum+a;
        }
        a=sum;
    }
    printf("%d^%d is %d", n,b,sum);
}