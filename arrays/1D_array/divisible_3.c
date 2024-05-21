#include<stdio.h>
//Count number of elements divisible by 3 in array.
void main() {
    int n,i,count=0;
    printf("enter number of elements in array:");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter element of a[%d]:",i);
        scanf("%d", &a[i]);
        if(a[i]%3==0){
            count++;
        }
    }
    printf("total numebr of elements divisible by 3 in arraay is %d", count);
}