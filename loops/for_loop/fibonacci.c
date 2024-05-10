#include<stdio.h>
//Print the Fibonacci Series.
void main() {
int i,sum,m=0,n=1,x;
printf("enter a number of terms:");
scanf("%d", &x);
printf("0\t");
printf("1\t");
for(i=2;i<=x;i++){
    sum=m+n;
    printf("%d\t", sum);
    m=n;
    n=sum;
}
}