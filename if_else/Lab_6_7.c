#include<stdio.h>
//electricity bill
void main(){

float unit;
printf("enter unit of bill:");
scanf("%f", &unit);

if(unit<=50) {
    printf("bill is: %f", (unit*0.5)+((20*unit*0.50)/100));
}
else if(unit > 50 && unit <= 150) {
    printf("bill is:%f", (50*0.50)+(unit-50)*0.75+((50*0.50)+(unit-50)*0.75)*20/100);
}
else if(unit > 150 && unit <= 250) {
    printf("bill is:%f", (50*0.50)+(100*0.75)+(unit-150)*1.20+((50*0.50)+(100*0.75)+(unit-150)*1.20)*20/100);
}
else if(unit > 250) {
    printf("bill is:%f", (50*0.50)+(100*0.75)+(100*1.20)+(unit-250)*1.50+((50*0.50)+(100*0.75)+(100*1.20)+(unit-250)*1.50)*20/100);
}
else{
    printf("enter a correct unit");
}
}