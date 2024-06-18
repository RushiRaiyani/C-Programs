#include<stdio.h>
//Read values in two-dimensional array and print them in matrix form.
void main() {
    int a,b,i,j;
    printf("enter number of rows and column:");
    scanf("%d %d", &a,&b);
    i=a;
    j=b;
    int m[i][j];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
    printf("enter element of m[%d][%d]:",i+1,j+1);
    scanf("%d", &m[i][j]);
}
}
printf("matrix is:\n");
for(i=0;i<a;i++){
    for(j=0;j<b;j++){
printf("%d\t", m[i][j]);
}
printf("\n");
}
}