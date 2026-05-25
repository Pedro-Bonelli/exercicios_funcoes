#include <stdio.h>
#include <math.h>

int quad(int);

int main(){
    int l, r_val;

    printf("Digite um numero: ");
    scanf("%d", &l);

    r_val = quad(l);
    printf("O menor inteiro positivo cujo quadrado e superior a %d: %d", l, r_val);
}

int quad(int l){
    int i = 1;

    while(i * i <= l){
        i++;
    }

    return i;
}