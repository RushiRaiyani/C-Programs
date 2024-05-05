#include<stdio.h>
/*      In boxing the weight class of a boxer is decided as per the following 
table. Write a program that receives weight as input and prints out 
the boxer’s weight class. 
Flyweight--<115
Bantamweight--115-121
Featherweight--122-153 
Middleweight--154–189 
Heavyweight-->= 190   */
void main(){
    int n;
    printf("enter weight in pounds:");
    scanf("%d", &n);
    if(n<115){
        printf("boxer class is flyweight");
    }
    else if(n>=115 && n<=121){
        printf("boxer class is bantamweight");
    }
    else if(n>=122 && n<=153){
        printf("boxer class is featherweight");
    }
    else if(n>=154 && n<=189){
        printf("boxer class is middleweight");
    }
    else {
        printf("boxer class is heavyweight");
    }    
}