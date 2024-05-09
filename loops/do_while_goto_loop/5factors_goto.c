#include<stdio.h>
//find factors of number.
void main() {
int n,i=1;
printf("enter a number:");
scanf("%d", &n);
factor:
if(n%i==0){
    printf("%d\n", i);
}
i++;
if(i<=n){
    goto factor;
}
}