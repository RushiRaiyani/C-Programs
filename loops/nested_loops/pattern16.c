#include<stdio.h>
/*  1
    01
    101
    0101
    10101  */
void main() {
int i,j,n,sum=0;
printf("enter number of rows:");
scanf("%d", &n);
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        sum=i+j;
        if(sum%2==0){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
}
}