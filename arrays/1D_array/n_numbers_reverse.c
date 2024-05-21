#include<stdio.h>
//Read n numbers from user and print in normal and reverse order.
void main(){
int n,i;
printf("enter a numbers you want to take input:");
scanf("%d", &n);
int arr[n];
for(i=0;i<n;i++){
    printf("enter arr[%d]:", i);
    scanf("%d", &arr[i]);
}
for(i=0;i<n;i++){
printf("%d\n", arr[i]);
}
printf("reverse order\n");
for(i=n-1;i>=0;i--){
    printf("%d\n", arr[i]);
}
}