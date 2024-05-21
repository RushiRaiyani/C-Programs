#include<stdio.h>
//Count number of positive or negative number from an array of n numbers.
void main(){
int i,pos=0,neg=0,n;
printf("enter number of terms:");
scanf("%d", &n);
int arr[n];
for(i=0;i<n;i++){
    printf("enter arr[%d]:",i);
    scanf("%d", &arr[i]);
    if(arr[i]>=0){
        pos++;
    }
    else{
        neg++;
    }
}
printf("number of negative number are %d & number of positive number are %d", neg,pos);
}