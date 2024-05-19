#include<stdio.h>
//compare string are same or not without using strcmp() function.
void main(){
    char a[100],b[100];
    int counta=0,countb=0,i;
    printf("enter string a:");
    gets(a);
    printf("enter string b:");
    gets(b);
    for(i=0;a[i]!='\0';i++){
        counta++;
    }
    for(i=0;b[i]!='\0';i++){
        countb++;
    }
    if(counta==countb){
        for(i=0;a[i]!='\0';i++){
            if(a[i]!=b[i]){
                 i=100;
                 break;
            }
        }
        if(i==100){
            printf("String are not same");
        }
        else{
            printf("String are same");
        }
    }
    else{
        printf("String are not same");
    }
}