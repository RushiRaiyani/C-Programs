#include<stdio.h>
//Read and store the roll no and marks of 20 students using 2D array.
void main(){
    int a[20][2],i,j;
    for(i=0;i<20;i++){
        for(j=0;j<2;j++){
           printf("enter roll no. and marks in a[%d][%d]:", i+1,j+1);
           scanf("%d", &a[i][j]);
        }
    }
    printf("roll no.\tmarks\n");
    for(i=0;i<20;i++){
        for(j=0;j<2;j++){
           printf("%d\t\t", a[i][j]);
        }
        printf("\n");
    }
}