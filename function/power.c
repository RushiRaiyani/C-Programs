#include<stdio.h>
//Find power of any number using recursion.
int power(int a,int b);
void main(){
int a,b;
printf("enter a and b for a^b:");
scanf("%d %d", &a,&b);
int res=power(a,b);
printf("%d", res);

}
int power(int a,int b){
int i,sum=1;
    if(b==0){
        return 1;
    }
    
    
    return a*power(a,b-1); 
}