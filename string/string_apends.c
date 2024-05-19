#include<stdio.h>
//apends 2nd string at end of first,wihtout using "strcat" function.
void main(){
char s1[100],s2[100];
int i,j,count=0;
printf("enter string s1:");
gets(s1);
printf("enter string s2:");
gets(s2);

for(i=0;s1[i]!='\0';i++){
    count++;
}

for(i=count,j=0;s2[j]!='\0';i++,j++){
    s1[i]=s2[j];
}
s1[i]='\0';
printf("%s", s1);
}