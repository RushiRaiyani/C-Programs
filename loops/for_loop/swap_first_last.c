#include<stdio.h>
#include<math.h>
//Swap first and last digits of a number.
void main() {
    int n,i,m,count=0,last,first,x=10;
    printf("enter a number:");
    scanf("%d",&n);
    m=n;
    while(n!=0){
        n=n/10;
        count++;
    }
    n=x;
    for(i=1;i<=count-3;i++){
    n=n*x;
    }
    last=m%10;
    first=m/pow(10,count-1);
    m=m/10;
    m=m%n;
    printf("%d%d%d", last,m,first);
}