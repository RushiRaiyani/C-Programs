#include<stdio.h>
/*  1
    0 1
    0 1 0
    1 0 1 0
    1 0 1 0 1  */
void main() {
 int i,j,sum=0;
for(i=1;i<=5;i++){
for(j=1;j<=i;j++){
    sum=i+j;
    if(i==1 || i==3 || i==5){
        if(sum%2==0){
            printf("1");
        }
        else{
            printf("0");
        }
        printf(" ");
    }
    if(i==2 || i==4){
        if(sum%2==1){
            printf("0");
        }
        else{
            printf("1");
        }
        printf(" ");
    }
}
printf("\n");
}   
}