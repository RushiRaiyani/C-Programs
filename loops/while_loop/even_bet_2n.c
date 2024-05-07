#include<stdio.h>
//Print numbers between two given numbers which is divisible by 2.
void main() {

    int a,b;
    printf("enter 2 numbers:");
    scanf("%d %d", &a, &b);

    int i=a;
    while(i<=b){
        if(i%2==0){
            printf("%d\n", i);
        }
        i++;
    }
}