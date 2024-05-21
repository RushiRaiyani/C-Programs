#include<stdio.h>
/*  Read five person height and weight and count the number of 
person having height greater than 170 and weight less than 50.  */
void main() {
    int h[5],w[5],i,count=0;
    for(i=0;i<5;i++){
        printf("enter height and weight of person %d:",i);
        scanf("%d %d", &h[i],&w[i]);
        if(h[i]>170 && w[i]<50){
            count++;
        }
    }
    printf("number of person with height greater than 170 and weight less than 50 are %d", count);
}