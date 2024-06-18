#include<stdio.h>
//Generate Fibonacci series of N given number using function name fibbo().
int fibbo(int n);
void main(){
    int n,a,i,res;
    printf("enter number of terms in fibonacci series:");
    scanf("%d", &n);
    printf("0\t1\t");
    for(int i=1;i<=n;i++){
        res=fibbo(i);
        printf("%d\t", res);
    }
}
int fibbo(int n){
    int temp=1,x=0,max,i;
    for(i=1;i<=n;i++){
        max=x+temp;
        x=temp;
        temp=max;
    }
    return max;
}