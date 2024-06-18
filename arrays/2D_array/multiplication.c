#include<stdio.h>
//Perform Multiplication of two matrices.
void main(){
    int c,d,e,f;
    printf("enter number of rows and column of matrix A:");
    scanf("%d %d",&c,&d);
    printf("enter number of rows and column of matrix B:");
    scanf("%d %d", &e,&f);
    int a[c][d],b[e][f],x[c][f],pro=0,k,i,j;
    if(d==e){
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("enter element in matrix a[%d][%d]:", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<e;i++){
        for(j=0;j<f;j++){
           printf("enter element in matrix b[%d][%d]:", i+1,j+1);
           scanf("%d", &b[i][j]);
        }
    }
for(i=0;i<c;i++){    
    for(j=0;j<f;j++){
        k=0,pro=0;
while(k<e){
        pro=pro+(a[i][k]*b[k][j]);       
        k++;
}
x[i][j]=pro;
}
}
for(i=0;i<c;i++){
    for(j=0;j<f;j++){
        printf("%d\t", x[i][j]);
    }
    printf("\n");
}
}
else{
    printf("matrix multiplication not possible");
}
}