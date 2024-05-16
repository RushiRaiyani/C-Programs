#include<stdio.h>
/*  55555
    4444
    333
    22
    1   */
void main() {
    int n,i,j,k;
    printf("enter number of rows:");
    scanf("%d", &n);
    k=n;
    for(i=1;i<=n;i++){
        for(j=5;j>=i;j--){
            printf("%d", k);
        }
        k--;
        printf("\n");
    }
}