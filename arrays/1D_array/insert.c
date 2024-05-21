#include<stdio.h>
//Insert new value in the sorted array.
void main (){
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
   int a[n+1],i,j,temp;
   for(i=0;i<n;i++){
    printf("enter element in a[%d]:", i);
    scanf("%d", &a[i]);
   }
   printf("sorted array is:");
   for(i=0;i<n;i++){
    for(j=1;j<n;j++){
    if(a[j]>a[j+1]){
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
    }
   }
   for(i=0;i<n;i++){
    printf("%d\t", a[i]);
   }
   printf("\nenter element to be inserted:");
   scanf("%d", &a[n+1]);
   for(i=0;i<n+1;i++){
    for(j=1;j<n+1;j++){
    if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    }
   }
   printf("final sorted array is:");
   for(i=0;i<n+1;i++){
    printf("%d\t", a[i]);
   }
}