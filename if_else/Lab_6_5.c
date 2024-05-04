#include<stdio.h>
#include<math.h>
//find point lies on circle,or ouside circle or inside circle
int  main() {

int radius;
printf("enter radius :");
scanf("%d", &radius);

int x, y;
printf("enter x and y :");
scanf("%d %d", &x, &y);
double d = pow(x, 2) + pow(y, 2); 
double r = pow(radius, 2);

if(d > r) {
    printf("point lies outside circle \n");
}
else if(d == r) {
printf("point lies on the circle \n");
}
else {
    printf("point lies inside the circle \n");
}
    return 0;
}