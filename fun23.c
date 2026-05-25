#include <stdio.h>

void divide_13(int, int);

int main(){
    int x, y;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    divide_13(x, y);
}

void divide_13(int x, int y){
    for(int i = x + 1; i < y; i++){
        if(i % 13 == 5){
            printf("%d\n", i);
        }
    }
}