#include<stdio.h>
//Pass an array in function to print array elements.
void display(int a[5],int i);
void main() {
    int a[5],i;
    for(i=0;i<5;i++){
        printf("enter a[%d] element in array:",i+1);
        scanf("%d", &a[i]);
    }
    printf("enter array you want to display:");
    scanf("%d", &i);
    display(a,i-1);

}
void display(int a[5],int i){
    printf("element is %d", a[i]);
}