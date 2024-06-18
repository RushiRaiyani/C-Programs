#include<stdio.h>
//Perform Addition of two matrices.
void main() {
    int a,b;
    printf("enter number of rows and column:");
    scanf("%d %d", &a,&b);
    int c[a][b],d[a][b],i,j,*ptr[a][b],*ptr1[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("enter element in matrix a[%d][%d]:", i+1,j+1);
            scanf("%d", &c[i][j]);
            ptr[i][j]=&c[i][j];
        }
    }
    
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
           printf("enter element in matrix b[%d][%d]:", i+1,j+1);
           scanf("%d", &d[i][j]);
           ptr1[i][j]=&d[i][j];
        }
    }
    printf("addition matrix is:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t", *ptr[i][j]+*ptr1[i][j]);
        }
        printf("\n");
    }
}