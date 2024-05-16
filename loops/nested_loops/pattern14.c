#include<stdio.h>
/*    *
     **
    *** 
   ****
  *****  */
void main() {
    int i,n,j;
    printf("enter number of rows:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
    for(j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
    }
}