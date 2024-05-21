#include<stdio.h>
//Find two largest elements in a one dimensional array.
void main() {
    int n;
    printf("enter element of array:");
    scanf("%d", &n);
    int a[n],i;
    for(i=0;i<n;i++){
        printf("enter element a[%d]", i);
        scanf("%d", &a[i]);
    }
    int large=a[0],large2;
    for(i=1;i<n;i++){
        if(large<a[i]){
            large2=large;
            large=a[i];
        }
    }
    printf("largest number is %d & 2nd largest is %d", large,large2);
}