#include<stdio.h>
//Print sum of 1 to n numbers
void main() {

    int n,sum=0,i;
    printf("enter a number:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d", sum);
}