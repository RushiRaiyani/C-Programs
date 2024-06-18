#include<stdio.h>
//Store n elements in an array and print the elements using pointer.
void main(){
    int n;
    printf("enter number of elements:");
    scanf("%d", &n);
    int a[n],*p,i;
    for(i=0;i<n;i++){
        printf("a[%d]:", i+1);
        scanf("%d", &a[i]);
    } 
    printf("\n");
    for(i=0;i<n;i++){
        p=&a[i];
        printf("a[%d]:%d\n", i+1,*p);
    }
}