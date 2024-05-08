#include<stdio.h>
//Print all uppercase and lowercase alphabets.

//z=122,a=97,A=65,Z=90

void main(){
char i='A';
printf("uppercase alphabets\n");
while(i>='A' && i<='Z'){
    printf("%c\n", i);
    i++;
}
i='a';
printf("lowercase alphabets\n");
while(i>='a' && i<='z'){
    printf("%c\n", i);
    i++;
}
}