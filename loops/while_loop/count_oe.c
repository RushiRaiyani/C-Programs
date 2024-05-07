#include<stdio.h>
//Get 10 numbers from user print count of odd, even numbers
void main() {

int a,i=1,evencount=0,oddcount=0;
while(i<=10){
printf("enter a number:");
scanf("%d", &a);
if(a%2==0){
    evencount=evencount+1;
}
else{
    oddcount=oddcount+1;
}
i++;
}
printf("evencount is %d and odd count is %d", evencount, oddcount);

}