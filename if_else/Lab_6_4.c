# include<stdio.h>
//given character is uppercase lowercase or digit
int main() {
      char ch;
      printf("enter a character:");
      scanf("%c", &ch);

    if (ch>64 && ch<91) {
        printf("Uppercase \n");
    }
    else if (ch>96 && ch<123) {
        printf("lower case \n");
    }
    else if(ch>47 && ch<58){
        printf("digit");
    }
    else {
        printf("special symbol \n");
    }
        return 0;
}    
