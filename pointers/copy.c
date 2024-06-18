#include<stdio.h>
//Copy one array to another using pointers.
void main(){
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n],b[n],i,*p;
    for(i=0;i<n;i++){
        printf("enter element of array[%d]:", i);
        scanf("%d", &a[i]);
    }
    printf("array b is:");
    for(i=0;i<n;i++){
        p=&a[i];
        b[i]=*p;  
        printf("%d\n", b[i]);
    }
}