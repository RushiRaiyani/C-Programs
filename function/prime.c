#include<stdio.h>
//Find all prime numbers between given interval using functions.
int prime(int a);
void main(){
    int a,b,res,i;
    printf("enter 2 numbers:");
    scanf("%d %d", &a,&b);
    printf("Prime numbers between %d and %d are:\n", a,b);
    for(i=a;i<=b;i++){
    res=prime(i);
    if(res!=-1)
    printf("%d\t", res);
    }
}
int prime(int n){
    int i,count=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0){
        return n;
    }
    else{
        return -1;
    }
}