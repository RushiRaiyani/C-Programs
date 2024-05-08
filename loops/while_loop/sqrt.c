#include<stdio.h>
#include<math.h>
//Print number and its square root for 0 to 9
void main() {

    int i=0;
    while(i<=9){
        printf("%d\n", i);
        printf("%f\n", sqrt(i));
        i++;
    }

}