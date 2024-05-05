#include<stdio.h>
//compare area and perimeter
void main() {

    int lenght, breadth;
    int a = lenght * breadth;
    int p = (lenght + breadth) * 2;

    printf("enter lenght anf breadth");
    scanf("%d %d", &lenght, &breadth);

    if(a > p) {
        printf("area is greater");
    }
    else{
        printf("perimeter is greater");
    }
}