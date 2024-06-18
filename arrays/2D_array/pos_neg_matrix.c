#include<stdio.h>
//Count number of positive, negative and zero elements from 3 X 3 matrix.
void main(){
    int a[3][3],i,j,count0=0,countp=0,countn=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter element in matrix a[%d][%d]:", i+1,j+1);
            scanf("%d", &a[i][j]);
            if(a[i][j]==0){
                count0++;
            }
            else if(a[i][j]>0){
                countp++;
            }
            else{
                countn++;
            }
        }
    }
    printf("count of positive element in matrix is %d\n", countp);
    printf("count of negative element in matrix is %d\n", countn);
    printf("count of 0 element in matrix is %d\n", count0);
}