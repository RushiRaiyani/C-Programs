#include<stdio.h>
//Print odd numbers between 1 to 10 then modify 1 to n using while 
void main(){

    int i=1;
    while(i<10){
        if(i%2 !=0){
            printf("%d\n", i);
        }
       i++;
    }
    int n;
    printf("enter a number:");
    scanf("%d", &n);

int j;
while(j<=n){
    if(j%2 !=0){
        printf("%d\n", j);
    }
    j++;
}
}