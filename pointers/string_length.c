#include<stdio.h>
//Find length of string using pointers.
void main() {
    char s[100];
    printf("enter a string:");
    gets(s);
    char *p=&s[0];
    int i=0;
    while(s[i]!='\0'){
i++;
    }
    char *p1=&s[i];
printf("%d", p1-p);    
}