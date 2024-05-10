#include<stdio.h>
//Calculate 𝑥𝑦 without using power function.
void main() {

    int x,y,ans=1,i;
    printf("enter x and y for x^y:");
    scanf("%d %d", &x,&y);
    for(i=1;i<=y;i++){
        ans=ans*x;
     }
     printf("%d^%d=%d", x,y,ans);
}