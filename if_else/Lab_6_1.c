#include<stdio.h>
//triangle is valid or not
int main() {

int a1, a2, a3;

printf("enter 3 angles :");
scanf("%d %d %d", &a1, &a2, &a3);

if((a1 + a2 + a3) == 180) {
    printf("triangle is valid \n");
}
else{
    printf("triangle is not valid \n");
}
}