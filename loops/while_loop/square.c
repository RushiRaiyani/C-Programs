#include<stdio.h>
//Calculate the square of integers 1 through 10.
void main(){

    int i=1,n;
    while(i<=10){
        n=i*i;
        printf("square is %d\n", n);
        i++;
    }
}