#include<stdio.h>
/* 1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15 */
void main(){
int n,i,j,a=1;
printf("enter number of rows:");
scanf("%d", &n);
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
       printf("%d", a);
       printf(" ");
       a++;
    }
    printf("\n");
}
}