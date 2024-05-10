#include<stdio.h>
//Print 1 to 10 then modify program print 1 to n.
void main() {

int n,i;
for(i=1;i<=10;i++){
    printf("%d\n", i);
}
    printf("enter a number:");
    scanf("%d", &n);
for(i=1;i<=n;i++) {
    printf("%d\n", i);
}
}
