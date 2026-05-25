#include <stdio.h>
#include <string.h>

int palindromo(char[]);

int main(){
    char p[30];
    int r_valor;

    printf("Digite uma palavra: ");
    fgets(p, sizeof(p), stdin);
    p[strlen(p) - 1] = '\0';

    r_valor = palindromo(p);
    if(r_valor != 0){
        printf("Palindromo");
    }
    else{
        printf("Nao Palindromo");
    }
}

int palindromo(char p[]){
    int cont = 0;
    for(int i = 0; i < strlen(p)/2; i++){
        if (p[i] == p[strlen(p) - 1 - i]){
            cont++;
        }
    }

    if(cont == strlen(p)/2){
        return 1;
    } else{
        return 0;
    }
}