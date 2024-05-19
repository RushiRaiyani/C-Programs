#include<stdio.h>
//print string in reverse order without using "strrev" function.
void main() {
    char s1[100],count=0;
    int i,x,temp=0;
    printf("enter string s1:");
    gets(s1);
    for(i=0;s1[i]!='\0';i++){
    count++;
}  
x=count;
    for(i=0;i!=x/2;i++){
        temp=s1[i];
        s1[i]=s1[count-1];
        s1[count-1]=temp;
        count--;
    }
    printf("%s", s1);
}