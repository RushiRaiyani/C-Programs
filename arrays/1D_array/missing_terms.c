#include<stdio.h>
/*Find missing numbers of sequence using array.
(in a sequence 1,2,4,5,7,8,10, Missing numbers are 3,6,9) */
void main(){
    int n;
    printf("enter number of terms:");
    scanf("%d", &n);
    int a[n],b[n],j=0,k=1,i;
    for(i=0;i<n;i++){
    printf("enter element a[%d]:", i);
    scanf("%d", &a[i]);
    }
    printf("missing terms are:");
    for(i=0;k<a[n-1];k++){
        if(a[i]!=k){
        b[j]=k;
        printf("%d\t", b[j]);
        j++;
        }
        else{
            i++;
        }
    }
}