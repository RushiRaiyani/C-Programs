#include<stdio.h>

void main(){
    int n,a,i,count0,countp=0,countn=0;
    printf("enter number you want to enter:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("enter a number:");
        scanf("%d", &a);
        if(a>0){
            countp++;
        }
        else if(a==0){
            count0++;
        }
        else{
            countn++;
        }
    }
    printf("number of 0 are %d\n", count0);
    printf("number of positive number are %d\n", countp);
    printf("number of negative number are %d\n", countn);
}