#include<stdio.h>
//Count frequency of digits in an integer.
void main() {
    int n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    printf("enter a number:");
    scanf("%d", &n);
while(n!=0){
    if(n%10==0){
        a++;
        n=n/10;
    }
    if(n%10==1){
        b++;
        n=n/10;
    }
    if(n%10==2){
        c++;
        n=n/10;
    }
    if(n%10==3){
        d++;
        n=n/10;
    }
    if(n%10==4){
        e++;
        n=n/10;
    }
    if(n%10==5){
        f++;
        n=n/10;
    }
    if(n%10==6){
        g++;
        n=n/10;
    }
    if(n%10==7){
        h++;
        n=n/10;
    }
    if(n%10==8){
        i++;
        n=n/10;
    }
    if(n%10==9){
        j++;
        n=n/10;
    }
}
        printf("frequency of 0 is %d\n", a);
        printf("frequency of 1 is %d\n", b);
        printf("frequency of 2 is %d\n", c);
        printf("frequency of 3 is %d\n", d);
        printf("frequency of 4 is %d\n", e);
        printf("frequency of 5 is %d\n", f);
        printf("frequency of 6 is %d\n", g);
        printf("frequency of 7 is %d\n", h);
        printf("frequency of 8 is %d\n", i);
        printf("frequency of 9 is %d\n", j);
 
}