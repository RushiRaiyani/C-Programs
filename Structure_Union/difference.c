#include<stdio.h>
//Demonstrate difference between structure and union.
struct student{
    int marks;
    char name[60];
    int roll_no;
};
union student1{
    int marks;
    char name[60];
    int roll_no;
};
void main(){
    printf("size of structure is %d: \n", sizeof(struct student));
    printf("size of union is %d: \n", sizeof(union student1));

}