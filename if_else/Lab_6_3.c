#include<stdio.h>
//print gross salary of entered salary by user
void main() {

int salary;
printf("enter a salary:");
scanf("%d", &salary);

float hra, da;
hra = 0.2 * salary;
da = 0.8 * salary;

if(salary >= 10000 && salary < 20000) {
    printf("gross salary is %f", salary + (0.2 * salary) + (0.8 * salary));
}
else if(salary >= 20000 && salary < 30000) {
    printf("gross salary is %f", salary + (0.25 * salary) + (0.9 * salary));
}
else if(salary >= 30000){
    printf("gross salary is %f", salary + (0.3 * salary) + (0.95 * salary));
}
else {
    printf("enter a valid salary");
}
}