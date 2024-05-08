#include<stdio.h>
//Print sum of 1 to n numbers
void main() {

    int n;
    printf("enter a number:");
    scanf("%d", &n);
    int sum=0,i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("%d", sum);
}