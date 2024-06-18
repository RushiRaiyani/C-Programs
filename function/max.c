#include<stdio.h>
//Return the maximum of three floating-point numbers.
float max(float a,float b,float c);
void main(){
    float a,b,c;
    printf("enter 3 numbers A and B and C:");
    scanf("%f %f %f", &a,&b,&c);
    printf("max is %f", max(a,b,c));
}
float max(float x,float y,float z){
if(x>y){
    if(x>z){
        return x;
    }
    else{
        return z;
    }
}
else{
    if(y>z){
        return y;
}
else{
    return z;
}
}
}