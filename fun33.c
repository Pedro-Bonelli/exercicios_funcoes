#include <stdio.h>

void divisores(int);

int main(){
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    divisores(x);
}

void divisores(int x){
    for(int i = 1; i <= x; i++){
        if(x % i == 0){
            printf("%d\n", i);
        }
    }
}