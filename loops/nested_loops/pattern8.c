#include<stdio.h>
/*  1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5 */
void main() {
int i,n,j,a;
printf("enter number of rows:");
scanf("%d", &n);
for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    a=1;
    for(j=1;j<=2*i-1;j++){
        if(j%2==1){
            printf("%d", a);
            a++;
    }
    else{
        printf(" ");
    }
    }
    printf("\n");
}
}