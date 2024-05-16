#include<stdio.h>
/*  Estimate the value of the mathematical constant e. (Formula: 𝑒 = 1 +
1/1! + 1/2! + 1/3! + 1/4!…)   */
void main() {
int i,j,fact=1,n;
float ans=1;
printf("enter number of terms:");
scanf("%d", &n);
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
fact=fact*j;
    }
    ans=ans+1/(float)fact;
    fact=1;
}
printf("value of e for first %d terms is %f", n,ans);
}