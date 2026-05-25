#include <stdio.h>

void romano(int);

int main(){
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    romano(x);
}

void romano(int x){
    while(x >= 1000){
        printf("M");
        x -= 1000;
    }
    if(x >= 900){
        printf("CM");
        x -= 900;
    }
    while(x >= 500){
        printf("D");
        x -= 500;
    }
    if(x >= 400){
        printf("CD");
        x -= 400;
    }
    while(x >= 100){
        printf("C");
        x -= 100;
    }
    if(x >= 90){
        printf("XC");
        x -= 90;
    }
    while(x >= 50){
        printf("L");
        x -= 50;
    }
    if(x >= 40){
        printf("XL");
        x -= 40;
    }
    while(x >= 10){
        printf("X");
        x -= 10;
    }
    if(x >= 9){
        printf("IX");
        x -= 9;
    }
    while(x >= 5){
        printf("V");
        x -= 5;
    }
    if(x >= 4){
        printf("IV");
        x -= 4;
    }
    while(x >= 1){
        printf("I");
        x -= 1;
    }
}