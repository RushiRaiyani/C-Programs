#include<stdio.h>
/* Create structure student with name, percentage and age.
Read data of 5 students using array of structure. */
typedef struct student{
    char name[32];
    float per;
    int age;
}stu;
void main() {
 stu s[5];
 int i;
 for(i=0;i<5;i++){
 printf("enter name,percentage and age of student:");
 scanf("%s %f %d", s[i].name,&s[i].per,&s[i].age);
 }
 for(i=0;i<5;i++){
    printf("name,percentage ang age student %d is %s\n%f\n%d\n",s[i].name,s[i].per,s[i].age);
 }
}