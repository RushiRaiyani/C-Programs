#include<stdio.h>
//convert uppercase alphabets to lowercase without using "strlwr" function.
void main(){
    char s[100];
    int i;
    printf("enter a string:");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>64 && s[i]<91){
            s[i]=s[i]+32;
        }
    }
    printf("%s", s);
}