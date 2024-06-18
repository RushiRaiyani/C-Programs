#include<stdio.h>
#include<string.h>
/* Use string handling functions 
strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and strupr() */
void main(){
    char a[100],b[100],d[50],c[50];
    printf("enter string 1:");
    gets(a);
    printf("enter a string 2:");
    gets(b);
    printf("length of string 1 is %d\n", strlen(a));
    printf("length of string 2 is %d\n", strlen(b));
    int res=strcmp(a,b);
    if(res==0){
        printf("Both string are same\n");
    }
    else{
        printf("Both string are not same\n");
    }
    printf("uppercase of string 1 is:%s\n", strupr(a));
    printf("uppercase of string 2 is:%s\n", strupr(b));
    printf("lowercase of string 1 is:%s\n", strlwr(a));
    printf("lowercase of string 2 is:%s\n", strlwr(b));
    printf("reverse of string 1 is:%s\n", strrev(a));
    printf("Now string 1 is:%s\n", strcpy(a,b));    
    printf("Now string 1 is:%s\n", strcat(a,b));
}