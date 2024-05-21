#include<stdio.h>
//Reverse elements of an array without using second array.
void main() {
    int n;
    printf("enter elements of array:");
    scanf("%d", &n);
    int a[n],i,temp,m;
    m=n;
    for(i=0;i<n;i++){
        printf("enter element in a[%d]:", i);
        scanf("%d", &a[i]);
    }
    for(i=0;i<=n/2;i++){
        temp=a[i];
        a[i]=a[n-1];
        a[n-1]=temp;
        n--;
    }
    for(i=0;i<m;i++){
        printf("%d\n", a[i]);
    }
}