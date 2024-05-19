#include<stdio.h>
//print first n character of string 2 to string1 without using "strncpy" function.
void main() {
    char s1[100],s2[100];
    int i,n;
    printf("enter string 2:");
    gets(s2);
    printf("enter n which should be copied to string 1:");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        s1[i]=s2[i];
    }
    s1[i]='\0';
    printf("%s", s1);
}