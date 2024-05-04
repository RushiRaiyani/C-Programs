#include<stdio.h>
//gives absolute value
int main() {
    int x;
    printf("enter a number :");
    scanf("%d", &x);

    if(x < 0) {
        x = x * -1;
    }
    printf("absolute of entered number is :%d \n", x);
}
