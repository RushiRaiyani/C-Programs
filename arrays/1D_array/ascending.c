#include<stdio.h>
//Sort elements of an array in an ascending order.
void main() {
    int n;
    printf("enter size of array:");
    scanf("%d", &n);
    int a[n],j,i,temp;
    for(i=0;i<n;i++){
        printf("enter element in a[%d]:", i);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
    }
    printf("ascending order is:");
    for(i=0;i<n;i++){
        printf("%d\t", a[i]);
    }
}