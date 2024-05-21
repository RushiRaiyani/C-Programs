#include<stdio.h>
//Search element in array.
void main() {
    int n,m;
    printf("enter size of aaray:");
    scanf("%d", &n);
    int a[n],i;
    for(i=0;i<n;i++){
        printf("enter element in a[%d]:", i);
        scanf("%d", &a[i]);
    }
    printf("enter array you want to search:");
    scanf("%d", &m);
    printf("element of a[%d] is %d", m,a[m]);    
}