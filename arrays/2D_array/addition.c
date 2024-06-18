#include<stdio.h>
//Perform Addition of two matrices.
void main() {
    int c,d;
    printf("enter number of rows and column:");
    scanf("%d %d", &c,&d);
    int a[c][d],b[c][d],i,j;
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("enter element in matrix a[%d][%d]:", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
           printf("enter element in matrix b[%d][%d]:", i+1,j+1);
           scanf("%d", &b[i][j]);
        }
    }
    printf("addition matrix is:\n");
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("%d\t", a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}