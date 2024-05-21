#include<stdio.h>
//Count numbers higher than the average of an array.
void main() {
    int n;
    printf("enter size of array:");
    scanf("%d", &n);
    int a[n],i,count=0;
    float sum=0;
    for(i=0;i<n;i++){
        printf("enter element in a[%d]:", i);
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    sum=sum/n;
    printf("avg is %f\n", sum);
    for(i=0;i<n;i++){
       if(a[i]>sum){
        count++;
       }
    }
    printf("numbers higher than the average of an array are %d",count);
}