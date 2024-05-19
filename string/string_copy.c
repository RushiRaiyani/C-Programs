#include<stdio.h>
//WAP that copies 2nd string too 1st string without using function "strcpy".
void main(){
    char s1[100],s2[100];
    int i;
    printf("enter string 1:");
    gets(s1);
    printf("enter string 2:");
    gets(s2);
    for(i=0;s2[i]!='\0';i++){
        s1[i]=s2[i];
    }
    s1[i]='\0';
    printf("%s\t%s", s1,s2);
}