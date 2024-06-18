#include<stdio.h>
/* Create a structure book with book title, author, publication, and price. 
Read data of 3 books and display. */
struct book{
    char title[32];
    char author[32];
    int price;
};
void main(){
struct book b[3];
int i;
for(i=0;i<3;i++){
    printf("enter title of book:");
    fgets(b[i].title);
    printf("enter author of book:");
    scanf("%s", b[i].author);
    printf("enter price of book:");
    scanf("%d", b[i].price);
}
for(i=0;i<3;i++){
    printf("Title of book is %s\n", b[i].title);
    printf("Author of book is %s\n",b[i].author);
    printf("Price of book is %d\n", b[i].price);
}
}