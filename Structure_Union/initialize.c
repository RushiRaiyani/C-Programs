#include<stdio.h>
#include<string.h>
// Create, declare and initialize structure employee.
struct employee{
    char name[100];
    float pac;
    int age;
};
void main(){
    struct employee e1;
    printf("enter name of employee:");
    gets(e1.name);
    printf("enter pac of employee:");
    scanf("%f", &e1.pac);
    printf("enter age of employee:");
    scanf("%d", &e1.age);
    printf("name of employee:%s\n", e1.name);
    printf("pacakge of employee:%flac\n", e1.pac);
    printf("age of employee:%d\n", e1.age);
} 