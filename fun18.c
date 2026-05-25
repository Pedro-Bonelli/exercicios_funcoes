#include <stdio.h>

int soma_inter(int);

int main(){
    int x, r_valor;

    printf("Digite um numero: ");
    scanf("%d", &x);

    r_valor = soma_inter(x);
    printf("A soma dos numeros entre 1 e %d: %d", x, r_valor);
}

int soma_inter(int x){
    int soma = 0;

    for (int i = 2; i < x; i++){
        soma = soma + i;
    }
    return soma;
}