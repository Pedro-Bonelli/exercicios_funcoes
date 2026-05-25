#include <stdio.h>

void binario(int);

int main(){
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    binario(x);
}

void binario(int x){
    int bin[32];
    int i = 0;

    if(x == 0){
        printf("0");
    } else{
        while(x > 0){
            bin[i] = x % 2;
            x = x / 2;
            i++;
        }
        
        for(int j = i - 1; j >= 0; j--){
            printf("%d", bin[j]);
        }
    }
}