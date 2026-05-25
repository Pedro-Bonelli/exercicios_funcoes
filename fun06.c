#include <stdio.h>

int fatorial(int);

int main(){
    int n1, r_valor;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    r_valor = fatorial(n1);
    printf("%d! = %d", n1, r_valor);
}

int fatorial(int n1){
    int mult = 1;

    for (int i = n1; i >= 1; i--){
        mult = mult * i;
    }
    return mult;
}