#include<stdio.h>
//Find Max, Min, Sum, Avg. of given numbers from an array.
void main() {
int n,max,min,i,sum=0;
printf("enter number of terms:");
scanf("%d", &n);
int arr[n];
for(i=0;i<n;i++){
    printf("enter arr[%d]:", i);
    scanf("%d", &arr[i]);
    sum=sum+arr[i];
}
max=arr[0];
min=arr[0];
for(i=0;i<n;i++){
if(max<=arr[i]){
    max=arr[i];
}
}
printf("max from given number is %d\n",max);
for(i=0;i<n;i++){
    if(min>=arr[i]){
    min=arr[i];
}
}
printf("min from given numbers is %d\n", min);
printf("sum is %d and  avg is %f", sum, sum/(float)n);
}