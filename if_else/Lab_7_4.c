#include<stdio.h>
//wap to find who is youngest
int main() {

    int ram, shyam, ajay;
    printf("enter age of ram : & shyam : & ajay : ");
    scanf("%d %d %d", &ram, &shyam, &ajay);

    if(ram > shyam) {
        if(shyam > ajay) {
            printf("ajay is youngest \n");
        }
        else{
            printf("shyam is youngest \n");
        }
    }
    else {
        if(ram > ajay) {
            printf("ajay is youngest \n");
        }
        else {
            printf("ram is youongest \n");
        }
    }
}