#include<stdio.h>
//Demonstrate structure pointer.
struct student{
    int roll_no;
    char name[32];
    float cgpa;
};
void main(){
    struct student s,*ptr;
    ptr=&s;
    printf("enter name of student:");
    scanf("%s", ptr->name);
    printf("enter roll no of student:");
    scanf("%d", &ptr->roll_no);
    printf("enter cgpa of student:");
    scanf("%f", &ptr->cgpa);
    printf("name of student is %s\n", ptr->name);
    printf("roll number of student is %d\n", ptr->roll_no);
    printf("cgpa of student is %f\n", ptr->cgpa);
}
