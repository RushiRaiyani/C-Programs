#include<stdio.h>
/*   1
    A B
   1 2 3
  C D E F
1 2 3 4 5  */
void main() {
    int n=5,i,j,a;
    char ch='A';
    for(i=1;i<=n;i++){
        a=1;
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j%2==1){
            if(i%2==1){
                printf("%d", a);
                a++;
            }
            else{
                printf("%c", ch);
                ch++;
            }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}