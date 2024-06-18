#include<stdio.h>
//Read a matrix and print diagonal elements and its sum.
void main() {
    int a,b;
    printf("enter number of rows and column:");
    scanf("%d %d", &a,&b);
    int c[a][b],i,j,sum=0;
    if(a==b){
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("enter element in matrix C[%d][%d]:", i+1,j+1);
            scanf("%d", &c[i][j]);
        }
    }
    printf("diagonal elements are:");
    for(i=0;i<a;i++){
                printf("%d\t", c[i][i]);
                sum=sum+c[i][i];
    }
    printf("\n%d", sum);
}
else{
    printf("rows and cols are not same");
}
}