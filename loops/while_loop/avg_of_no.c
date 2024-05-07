#include<stdio.h>
//Find the sum and average of different numbers which are accepted by user as many as user wants.
void main() {

    int n,no,i=1;
    float avg=0;
    printf("enter avg of how many numbers you want to find:");
    scanf("%d", &n);
    printf("enter numbers:");
    while(i<=n){
        scanf("%d", &no);
        avg=avg+no;
        i++;
    }
    printf("avg is %f\n", avg/n);
    printf("sum is %f", avg);
}