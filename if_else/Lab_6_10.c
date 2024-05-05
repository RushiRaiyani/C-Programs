#include<stdio.h>
//print 2nd largest from 3 numbers
void main(){

int a,b,c;
printf("enter 3 numbers:");
scanf("%d %d %d", &a, &b, &c);

if(a>b){
    if(c>b){
        if(a>c){
            printf("c is 2nd largest");
        }
        else{
            printf("a is 2nd largest");
        }
        }
        else{
            printf("b is 2nd largest");
        }
}

else{
    if(c>a){
        if(b>c){
            printf("c is 2nd largest");
        }
        else{
            printf("b is 2nd largest");
        }
    }
    else {
        printf("a is 2nd largest");
    }
}
}