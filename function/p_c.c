#include<stdio.h>
/* C Program find nCr (Combination) and nPr (Permutation).
(Formula: nCr = n!/(r!*(n-r)!), nPr = n!/(n-r)!) */
float combi(int a,int b);
float perm(int a,int b);
void main(){
    int a,b;
    printf("enter values of n and r:");
    scanf("%d %d", &a,&b);
    printf("%dC%d is %f", a,b,combi(a,b));
    printf("%dP%d is %f", a,b,perm(a,b));
}
float combi(int a,int b){
    int i,fact=1,x;
    x=a-b;
    for(i=a;i>1;i--){
        a=a*(i-1);
    }
    for(i=b;i>1;i--){
        b=b*(i-1);
    }
    for(i=x;i>1;i--){
        x=x*(i-1);
    }

return a/(b*x);
}
float perm(int a, int b){
    int i,fact=1,x;
    x=a-b;
    for(i=a;i>1;i--){
        a=a*(i-1);
    }
    for(i=x;i>1;i--){
        x=x*(i-1);
    }

return a/x;    
}