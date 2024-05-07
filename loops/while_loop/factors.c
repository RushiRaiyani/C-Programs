#include<stdio.h>
// Find factors of the given number.

void main() {

    int n,i=1;
    printf("enter a number:");
    scanf("%d", &n);

    while(i<=n){
        if(n%i==0){
            printf("%d\n", i);
        }
        i++;
    }
}