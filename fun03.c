#include <stdio.h>

int potencia(int, int);

int main(){
    int n1, n2, r_valor;

    printf("Digite a base da potencia: ");
    scanf("%d", &n1);

    printf("\nDigite o expoente: ");
    scanf("%d", &n2);

    r_valor = potencia(n1, n2);
    printf("%d elevado a %d: %d", n1, n2, r_valor);
}

int potencia (int n1, int n2){
    int mult = 1;

    for (int i = 0; i < n2; i++){
        mult = mult * n1;
    }
    return mult;
}