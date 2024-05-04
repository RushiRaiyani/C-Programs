# include<stdio.h>
//wap who can vote or not
int main() {
    int age;
    printf("enter age:");
    scanf("%d", &age);
      
      if(age > 18) {
    printf("adult \n");
    printf("they can vote \n");
    printf("they can drive \n");
}
    else{
        printf("not adult \n");
    }
        printf("thank you \n");

     return 0;
}    