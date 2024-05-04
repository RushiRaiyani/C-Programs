#include<stdio.h>
/* Write a program that receives month and date of birth as input and 
prints the corresponding Zodiac sign */
void main(){
    int d,m;
    printf("enter date of birth and month:");
    scanf("%d %d", &d,&m);
    if((d>=22 && m==12) || (m==12 && d<=19)){
        printf("sun sign is Capricorn");
    }
    else if((d>=20 && m==1) || (m==2 && d<=17)){
        printf("sun sign is Aquarius");
    }
    else if((d>=18 && m==2) || (m==3 && d<=19)){
        printf("sun sign is Pisce");
    }
    else if((d>=20 && m==3) || (m==4 && d<=19)){
        printf("sun sign is Aries");
    }
    else if((d>=20 && m==4) || (m==5 && d<=20)){
        printf("sun sign is Taurus");
    }
    else if((d>=21 && m==5) || (m==6 && d<=20)){
        printf("sun sign is Gemini");
    }
    else if((d>=21 && m==6) || (m==7 && d<=22)){
        printf("sun sign is Cancer");
    }
    else if((d>=23 && m==7) || (m==8 && d<=22)){
        printf("sun sign is Leo");
    }
    else if((d>=23 && m==8) || (m==9 && d<=22)){
        printf("sun sign is Virgo");
    }
    else if((d>=23 && m==9) || (m==10 && d<=22)){
        printf("sun sign is Libra");
    }
    else if((d>=23 && m==10) || (m==11 && d<=21)){
        printf("sun sign is Scorpio");
    }
    else if((d>=22 && m==11) || (m==12 && d<=21)){
        printf("sun sign is Sagittarius");
    }
    else{
        printf("enter valid year or month");
    }
}