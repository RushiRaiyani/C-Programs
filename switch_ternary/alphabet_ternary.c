#include<stdio.h>
//Check whether character is an alphabet or not using conditional operator.
void main() {

char ch;
printf("enter a character:");
scanf("%c", &ch);

(ch>64 && ch<91) || (ch>96 && ch<123)? printf("alphabet"):printf("not a alphabet");
}