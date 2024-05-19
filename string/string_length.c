#include<stdio.h>
//find string length without usinng strlen(a) function.
void main(){
char a[100];
int count=0,i;
printf("enter string:");
gets(a);
for(i=0;a[i]!='\0';i++){
    count++;
}
printf("string length is %d", count);
}