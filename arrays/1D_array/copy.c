#include<stdio.h>
//Copy all elements of one array to another.
void main(){
int n,i;
printf("enter number of elements for array:");
scanf("%d", &n);
int a[n],b[n];
for(i=0;i<n;i++){
    printf("enter element of a[%d]:", i);
    scanf("%d", &a[i]);
    b[i]=a[i];
}
for(i=0;i<n;i++){
    printf("element of array b[%d] is %d\n", i,b[i]);
}
}