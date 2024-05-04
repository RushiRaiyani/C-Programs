#include<stdio.h>
//print result of student and class alloted
void main() {

int df,es,maths,cpc,ic;

printf("enter marks of 5 subjects:");
scanf("%d %d %d %d %d", &df, &es, &maths, &cpc, &ic);

float per;
per = ((df + es + maths + cpc + ic) * 100)/(float)500;
printf("percentage is %f \n", per);

if(per <= 35) {
    printf("Better luck next time \nYou are FAIL");
}
else if(per >= 36 && per < 45) {
    printf("Pass class");
}
else if(per > 45 && per < 60) {
    printf("Second class");
}
else if(per >= 61 && per < 70){
    printf("First class");
}
else{
    printf("Distinction");
}
}