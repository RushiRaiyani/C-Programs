#include<stdio.h>

int main() {

int x1, y1, x2, y2, x3, y3;
printf("enter x1 and y1 numbers");
scanf("%d %d", &x1, &y1);


printf("enter x2 and y2 numbers");
scanf("%d %d", &x2, &y2);


printf("enter x3 and y3 numbers");
scanf("%d %d", &x3, &y3);

//slope of each line

int s1,s2,s3;
s1 = (y2 - y1)/(x2-x1);
s2 = (y3 - y2)/(x3-x2);
s3 = (y3 - y1)/(x3-x1);

if((s1 == s2) && (s2 == s3)) {
printf("all points lie on same line \n");
}
else {
    printf("all 3 points are  not on same line \n");
}
}