#include<stdio.h>
#include"own_str.h"
void main(){
    int res;
    char a[100],b[100];
    printf("enter a string:");
    gets(a);
    printf("enter a string 2:");
    gets(b);
    printf("Length of string 1 is %d\n", length(a));
    printf("Length of string 2 is %d\n", length(b));

    res=compare(a,b);
    if(res==0){
        printf("strings are not same\n");    
    }
    else{
        printf("strings are same\n");
    }
copy(&a,&b);
    printf("string 1 is %s:", a);
}

