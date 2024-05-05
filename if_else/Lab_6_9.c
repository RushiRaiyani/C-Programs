#include<stdio.h>
#include<math.h>
void main() {
//wap to show triangle is equilateral,scalen,isoceles,right angled
int a,b,c;
printf(" enter 3 sides of triangle:");
scanf("%d %d %d", &a, &b, &c);

if(a == b && b == c){
    printf("trianlge is equilateral");
}
else if(pow(a,2)==(pow(b,2)+pow(c,2)) || pow(b,2)==(pow(a,2)+pow(c,2)) || pow(c,2)==(pow(b,2)+pow(a,2))){
    printf("right angle triangle");
}
else if(a == b || b == c || a == c){
    printf("isoceles triangle");
}
else if(a != b && b != c){
    printf("scalen triangle");
}
else{
    printf("enter a valid sides");
}
}