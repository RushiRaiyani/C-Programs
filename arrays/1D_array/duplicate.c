#include<stdio.h>
//Count total duplicate elements in an array.
void main(){
    int n;
    printf("enter size of array:");
    scanf("%d", &n);
    int a[n],i,j,count=0;
    for(i=0;i<n;i++){
        printf("enter element of a[%d]:", i);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==a[j] && i!=j){
                count++;
            }
        }
    }
        printf("total number of duplicate numbers are %d", count/2);
}
