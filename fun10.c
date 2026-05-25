#include <stdio.h>
#include <string.h>

int qua_primos(int, int);
int main(){
    int x, y, r_valor;

    printf("Digite um numero: ");
    scanf("%d", &x);
    
    printf("Digite outro numero: ");
    scanf("%d", &y);
    while(y < x){
        printf("\nO segundo numero deve ser maior que o primeiro. \nDigite novamente: ");
        scanf("%d", &y);
    }

    r_valor = qua_primos(x, y);
    printf("A quantidade de numeros primos entre %d e %d: %d", x, y, r_valor);
}

int qua_primos(int x, int y){
    int cont_primo = 0, cont_divisibilidade = 0;

    for(int i = x + 1; i < y; i++){
        cont_divisibilidade = 0;
        for (int j = 2; j < i; j++){
            if(i%j == 0){
                cont_divisibilidade++;
            }
        }
        if (cont_divisibilidade == 0)
        {
            cont_primo++;
        }
        
    } 
    return cont_primo;
}