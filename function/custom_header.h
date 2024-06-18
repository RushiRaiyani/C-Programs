#include<stdio.h>

int prime(int a);
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

int perfect(int a);
int perfect(int a){
int i,sum=0;
for(i=1;i<a;i++){
    if(a%i==0){
        sum=sum+i;
    }
}
if(sum==a){
    return 1;
}
}

int arm(int n){
    int i,m,count=0,power=1,x,ans=0;
    m=n;
    while(n!=0){
        x=n%10;
        count++;
        n=n/10;
    }
    n=m;
    while(m!=0){
        x=m%10;
        power=1;
        for(i=1;i<=count;i++){
            power=power*x;
        }
        m=m/10;
        ans=ans+power;
    }
    if(ans==n){
        return 1;
    }
}