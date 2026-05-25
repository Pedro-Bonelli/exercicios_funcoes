#include <stdio.h>

int triangulo(int, int, int);

int main(){
    int x, y, z, r_valor;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &y);
    
    printf("Digite o terceiro valor: ");
    scanf("%d", &z);

    r_valor = triangulo(x, y, z);
    
    if(r_valor == 0){
        printf("Resultado: %d (Nao forma um triangulo)", r_valor);
    }
    else if(r_valor == 1){
        printf("Resultado: %d (Equilatero)", r_valor);
    }
    else if(r_valor == 2){
        printf("Resultado: %d (Isosceles)", r_valor);
    }
    else if(r_valor == 3){
        printf("Resultado: %d (Escaleno)", r_valor);
    }
}

int triangulo(int x, int y, int z){
    if(x + y <= z || x + z <= y || y + z <= x || x <= 0 || y <= 0 || z <= 0){
        return 0;
    }
    
    if(x == y && y == z){
        return 1;
    }
    
    if(x == y || x == z || y == z){
        return 2;
    }
    
    return 3;
}