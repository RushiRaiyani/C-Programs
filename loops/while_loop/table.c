#include<stdio.h>
//Print multiplication table of a given number.
void main() {

    int n,i=1,ans;
    printf("enter a number:");
    scanf("%d", &n);

    while(i<=10){
        ans=i*n;
        printf("%d * %d = %d\n", n,i,ans);
    i++;
    }
}