#include<stdio.h>
//Demonstrate int, float, double and char pointer.
void main(){
    int a,*p1;
    char d,*p2;
    double b,*p3;
    float c,*p4;
    printf("enter value of int:");
    scanf("%d", &a);
    p1=&a;
    printf("address of int varaible is:%d & value of varaible is %d\n", p1,a); 

    printf("enter value of double:");  
    scanf("%lf", &b);
    p3=&b;
    printf("address of double varaible is:%d & value of varaible is %lf\n", p3,b);

    printf("enter value of float:");
    scanf("%f", &c);
    p4=&c;
    printf("address of float varaible is:%d & value of varaible is %f\n", p4,c);    
    printf("enter value of char:");
    scanf(" %c", &d);
    p2=&d;
    printf("address of char varaible is:%d & value of varaible is %c", p2,d);     
}