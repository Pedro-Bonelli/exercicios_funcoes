#include <stdio.h>

int fatorial(int);
int combinacao(int, int);

int main(){
    int n, r, r_valor;

    printf("Digite n: ");
    scanf("%d", &n);
    
    printf("Digite r: ");
    scanf("%d", &r);

    r_valor = combinacao(n, r);
    printf("Combinacoes: %d\n", r_valor);
}

int fatorial(int num){
    int f = 1;
    for(int i = 1; i <= num; i++){
        f = f * i;
    }
    return f;
}

int combinacao(int n, int r){
    return fatorial(n) / (fatorial(r) * fatorial(n - r));
}