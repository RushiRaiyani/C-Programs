#include<stdio.h>
//WAP to print odd numbers between 1 to n.
void  main(){
    int i=1,n;
    printf("enter a number of terms:");
    scanf("%d", &n);
    do{
        if(i%2!=0){
        printf("%d\n", i);
    }
    i++;
    }
    while(i<=n);
}