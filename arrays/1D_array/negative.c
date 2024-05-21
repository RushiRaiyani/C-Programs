#include<stdio.h>
//Count total number of negative elements in array.
void main() {
    int n,i,count=0;
    printf("enter number of elements in array:");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter element of a[%d]:",i);
        scanf("%d", &a[i]);
        if(a[i]<0){
            count++;
        }
    }
    printf("total numebr of negative element in arraay is %d", count);
}