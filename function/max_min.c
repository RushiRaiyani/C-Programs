#include<stdio.h>
//Find maximum and minimum between two numbers using function.
int max(int x,int y);
int min(int x, int y);
void main(){
int a,b;
printf("enter 2 numbers:");
scanf("%d %d", &a,&b);
printf("max number is:%d\n", max(a,b));
printf("min number is:%d\n", min(a,b));
}
int max(int x,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int min(int x,int y){
if(x>y){
    return y;
}
else{
    return x;
}
}
