#include<stdio.h>
//vowels or consonant
int main() {

char cons;
printf("enter a any alphabet:");
scanf("%c", &cons);

if(cons == 'a' || cons == 'e' || cons == 'i' || cons == 'o' || cons == 'u') {
printf("given character is vowel");
}
else if(cons == 'A' || cons == 'E' || cons == 'I' || cons == 'O' || cons == 'U'){
    printf("given character is vowel");
}
else{
printf("given character is consonant");
}

}