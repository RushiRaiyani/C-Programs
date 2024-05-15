#include<stdio.h>
/* 12345
   1234
   123
   12
   1     */
void main() {
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%3d", j);
        }
        printf("\n");
    }
}