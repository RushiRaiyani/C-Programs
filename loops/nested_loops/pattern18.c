#include<stdio.h>
/*    1
     A B
    2 3 4 
   C D E F
  5 6 7 8 9 */
void main() {
int i,j,n=5,a=1;
char b='A';
for(i=1;i<=5;i++){
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
        if(j%2!=0){
        if(i%2!=0){
            printf("%d", a);
            a++;
        }
        else{
            printf("%c", b);
            b++;
        }
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
}