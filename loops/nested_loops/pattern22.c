#include<stdio.h>
/*       *
        * *
       *   * 
      *     *
     *       *
      *     *
       *   *
        * *
         *   */
void main() {
int i,j,n=5;
for(i=9;i>=2*n-1;i--){
    for(j=1;j<=n;j++){
        printf(" ");
    }
    n--;
    if(i>=5){
    for(j=1;j<=2*n-1;j++){
        if(j==1,j==2*n-1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    }
}
}