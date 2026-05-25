#include <stdio.h>

void fibonacci(int);

int main(){
    int n;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    fibonacci(n);
}

void fibonacci(int n){
    int a = 0, b = 1, c;

    if(n >= 1) printf("%d", a);
    if(n >= 2) printf("%d", b);

    for(int i = 3; i <= n; i++){
        c = a + b;
        printf("%d", c);
        a = b;
        b = c;
    }
}