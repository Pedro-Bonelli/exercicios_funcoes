#include <stdio.h>

int ehPrimo (int);
int main(){
    int n1, r_valor;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    r_valor = ehPrimo(n1);
    if(r_valor != 0){
        printf("Primo");
    }
    else{
        printf("Nao Primo");
    }
}

int ehPrimo(int n1){
    int cont = 0;
    if(n1 == 1){
        return 0;
    }
    for (int i = 2; i <n1; i++){
        if(n1 % i == 0){
            cont++;
        }
        if(cont != 0){
            return 0;
            break;
        }
        else{
            return 1;
        }
    }
}