#include<stdio.h>
//show sellers profit or loss
int main() {
    int cost;
    printf("enter cost price :");
    scanf("%d", &cost);

    int sell;
    printf("enter sell price :");
    scanf("%d", &sell);

    if(cost > sell) { 
        printf("loss \n");
        printf("loss of : %d \n", cost - sell);
    }
    else {
        printf("profit \n");
        printf("profit of : %d \n", sell - cost);
    }

    
    return 0;
}