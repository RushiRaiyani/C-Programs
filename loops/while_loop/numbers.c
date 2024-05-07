#include<stdio.h>
//Print 1 to 10 then modify program Print 1 to n using while
void main() {

int i=1;
    while(i<=10) {
        printf("%d\n", i);
        i++;
    }
    int n,j=1;
    printf("enter a number:");
    scanf("%d", &n);

    while(j<=n) {
        printf("%d\n", j);
        j++;
    }
}