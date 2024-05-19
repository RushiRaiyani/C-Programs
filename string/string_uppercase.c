#include<stdio.h>
//convert lowercase alphabets to uppercase without using "strupr" function.
void main(){
    char s[100];
    int i;
    printf("enter a string:");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>96 && s[i]<123){
            s[i]=s[i]-32;
        }
    }
    printf("%s", s);
}