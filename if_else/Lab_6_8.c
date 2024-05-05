#include<stdio.h>
#include<math.h>
void main() {
//soolve the quadratic equation
float a,b,c,x,x1,x2,d;
printf("enter coefficient of x^2 and x and c,where a should not equal to 0:");
scanf("%f %f %f", &a, &b, &c);

d=pow(b,2)-4*a*c;
printf("discriminant is :%f\n", d);

if(d>0 && a!=0) {
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("roots are real and they are: %f and %f", x1,x2);
}
else if(d == 0 && a!=0) {
    x=(-b)/(2*a);
    printf("roots are equal and it is: %f\n", x);
}
else if(d<0 && a!=0){
    printf("roots are imagnary\n");
}
else{
    printf("enter a valid value");
}
}