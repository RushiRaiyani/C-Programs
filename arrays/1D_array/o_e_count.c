#include<stdio.h>
//Count number of even or odd number from an array of n numbers.
void main(){
int i,n,oddcount=0,evencount=0; 
printf("enter numbers you want to enter:");
scanf("%d", &n);
int arr[n];
for(i=0;i<n;i++){
    printf("enter arr[%d]:", i);
    scanf("%d", &arr[i]);
    if(arr[i]%2==0){
        evencount++;
    }
    else{
        oddcount++;
    }
}
printf("odd numbers are %d & even numbers are %d", oddcount,evencount);
}