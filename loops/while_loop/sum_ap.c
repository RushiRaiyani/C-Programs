#include<stdio.h>
//Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.
void main(){

    int n,max=1,count=1,i=1,sum=0;
    printf("enter number of term:");
    scanf("%d", &n);

while(count<=n){
    sum=sum+max;
    i++;
    max=i*i;
    count++;
}
printf("sum is %d", sum);
}