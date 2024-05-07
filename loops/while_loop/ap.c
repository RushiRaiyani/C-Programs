#include<stdio.h>
//Print first 50 numbers in series 1, 4, 7, 10…
void main() {

    int i=1,n,count=0;
    printf("enter number of terms:");
    scanf("%d", &n);
    while(count<=n){
        printf("%d\n", i);
        i=i+3;
        count++;
    }
}