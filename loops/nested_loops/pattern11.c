#include<stdio.h>
/*  * * * * *
     * * * *
      * * *
       * *
        *   */
void main(){
    int i,j,n;
    printf("enter number of rows:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=2*n-1;j>=2*i-1;j--){
            if(j%2==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    printf("\n");
    }

}