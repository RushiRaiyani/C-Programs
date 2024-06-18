#include<stdio.h>
// Demonstrate nested structure.
struct address{
    char city[32];
    int houseNo;
    int pincode;
};
struct student{
    char name[32];
    int roll_no;
    struct address add;
};
void main(){
    struct student s;
    printf("enter name of student:");
    scanf("%s", s.name);
    printf("enter roll_no:");
    scanf("%d", &s.roll_no);
    printf("enter city name:");
    scanf("%s", s.add.city);
    printf("enter pincode:");
    scanf("%d", &s.add.pincode);
    printf("enter house number:");
    scanf("%d", &s.add.houseNo);
    printf("Name of student is %s\n", s.name);
    printf("roll no of student is %d\n", s.roll_no);
    printf("city of student is %s\n", s.add.city);
    printf("pincode of student is %d\n", s.add.pincode);
    printf("house number of student is %d\n", s.add.houseNo);
}