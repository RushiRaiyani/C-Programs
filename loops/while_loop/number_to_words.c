#include<stdio.h>
/* Convert given number in words. (i.e. n=3456  output: Three Four Five Six) */
void main(){

    int n,sum=0,temp;
    printf("enter a number:");
    scanf("%d", &n);

    while(n!=0){
        temp=n%10;
        sum=sum*10+temp;
        n=n/10;
    }
    while(sum!=0) {
        if(sum%10==9){
            printf("nine ");
        }
        else if(sum%10==8){
            printf("eight ");
        }
        else if(sum%10==7){
            printf("seven ");
        }
        else if(sum%10==6){
            printf("six ");
        }
        else if(sum%10==5){
            printf("five ");
        }
        else if(sum%10==4){
            printf("four ");
        }
        else if(sum%10==3){
            printf("three ");
        }
        else if(sum%10==2){
            printf("two ");
        }
        else if(sum%10==1){
            printf("one ");
        }
        else{
            printf("zero ");
        }
        sum=sum/10;
    }
}