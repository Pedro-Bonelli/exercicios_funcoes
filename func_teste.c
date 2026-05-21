#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maiorVet(int[], int);
int menorVet(int[], int);

int main(){
    int vet1[25], vet2[50];
    int n1 = 0, n2 = 0, r1, r2;

    srand(time(NULL));

    printf("\nVetor 1:\n");
    for (int i = 0; i < 25; i++){
        vet1[i] = rand()%25 + 1;
        printf("%d\t", vet1[i]);
        n1++;
    }

    printf("\nVetor 2:\n");
    for (int i = 0; i < 50; i++){
        vet2[i] = rand()%50 + 1;
        printf("%d\t", vet2[i]);
        n2++;
    }
    
    r1 = maiorVet(vet1, n1);
    printf("\nMaior elemento vetor 1: %d", r1);
    r1 = menorVet(vet1, n1);
    printf("\nMenor elemento do vetor 2: %d", r1);
    
    r2 = maiorVet(vet2, n2);    
    printf("\nMaior elemento vetor 2: %d", r2);
    r2 = menorVet(vet2, n2);
    printf("\nMenor elemento do vetor 2: %d", r2);
} 

int maiorVet(int v[], int n){
    int maior = v[0];

    for (int i = 1; i < n; i++){
        if(maior < v[i]){
            maior = v[i];
        }
    }
    return maior;
}

int menorVet(int v[], int n){
    int menor = v[0];

    for (int i = 1; i < n; i++){
        if (menor > v[i]){
            menor = v[i];
        }
    }
    return menor;
}