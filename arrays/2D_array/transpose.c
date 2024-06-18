#include<stdio.h>
//Print Transpose of a matrix.
void main() {
  int a,b;
  printf("enter number of rows and column:");
  scanf("%d %d", &a,&b);
  int c[a][b],d[b][a],i,j;
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        printf("enter element in matrix c[%d][%d]:", i+1,j+1);
        scanf("%d",&c[i][j]);
        d[j][i]=c[i][j];
    }
  }
  printf("matrix A is:\n");
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        printf("%d\t", c[i][j]);
    }
    printf("\n");
  }
  printf("transpose of matrix is:\n");
  for(j=0;j<b;j++){
    for(i=0;i<a;i++){
    printf("%d\t", d[j][i]);  
    }
    printf("\n");  
  }
  }