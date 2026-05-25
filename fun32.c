#include <stdio.h>

void tabela_temperatura();

int main(){
    tabela_temperatura();
}

void tabela_temperatura(){
    float c;
    
    for(int f = 50; f <= 150; f++){
        c = 5.0 * (f - 32.0) / 9.0;
        printf("Fahrenheit: %d - Celsius: %.2f\n", f, c);
    }
}