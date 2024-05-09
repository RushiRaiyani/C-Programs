#include<stdio.h>
//print odd number from 1 to n.
void main() {
    int n,i=1;
    printf("enter number:");
    scanf("%d", &n);
    odd:
    if(i%2!=0){
        printf("%d\n", i);
    }
    i++;
    if(i<=n){
        goto odd;
    }
}