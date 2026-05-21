#include <stdio.h>

int mult(int, int);

int main(){
    int n1, n2, r_valor;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

    r_valor = mult(n1, n2);
    printf("%d", r_valor);
}

int mult(int n1, int n2){
    int soma = 0;
    for (int i = 0; i < n2; i++){
        soma = soma + n1;
    }
    return soma;
}