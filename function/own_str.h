#include<stdio.h>

int length(char a[100]);
int length(char a[100]){
int i,count=0;
for(i=0;a[i]!='\0';i++){
    count++;
}
return count;
}
//string compare
int compare(char a[100],char b[100]);
int compare(char a[100],char b[100]){

 int counta=0,countb=0,i;
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
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}
//string copy
void copy(char *a,char *b);
void copy(char *a,char *b){
    int i;
    for(i=0;*b[i]!='\0';i++){
        *a[i]=*b[i];
    }
    *a[i]='\0';
}