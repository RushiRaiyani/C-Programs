#include<stdio.h>
//Swap two arrays using pointers.
void main(){
    int n;
    printf("enter size of array:");
    scanf("%d", &n);
    int a[n],b[n],i,*p,temp;
    for(i=0;i<n;i++){
        printf("enter element in array[%d]:", i);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        printf("enter element in array[%d]:", i);
        scanf("%d", &b[i]);
    }
    for(i=0;i<n;i++){
        p=&a[i];
        temp=*p;
        a[i]=b[i];
        b[i]=temp;
    }
    printf("array a is now:");
    for(i=0;i<n;i++){
        printf("%d\t", a[i]);
    }
    printf("\narray b is now:");
    for(i=0;i<n;i++){
        printf("%d\t", b[i]);
    }
}