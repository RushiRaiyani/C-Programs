#include<stdio.h>
//show on which quadrant does the point lies
int main() {

int x, y;
printf("enter value of x and y");
scanf("%d %d", &x, &y);

if(x == 0 && y == 0) {
    printf("point lies on origin \n");
}
else if(x == 0 && y != 0) {
    printf("point lies on y axis \n");
}
else if(x != 0 && y == 0) {
    printf("point lies in x axis \n");
}
else{
    printf("point lis on any 1 quadrant \n");
}

    return 0;
}