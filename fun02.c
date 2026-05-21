#include <stdio.h>

int divisao(int, int);

int main()
{
    int n1, n2, r_valor;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("\nDigite outro numero: ");
    scanf("%d", &n2);
    while (n1 < n2 || n2 == 0)
    {
        if (n1 < n2)
        {
            printf("\nO segundo numero deve ser menor que o primeiro.\nDigite Novamente: ");
            scanf("%d", &n2);
        }
        else
        {
            printf("\nO numero deve ser diferente de zero.\n Digite Novamente: ");
            scanf("%d", &n2);
        }
    }

    r_valor = divisao(n1, n2);
    if (r_valor == 1)
    {
        printf("\nNao e divisivel.");
    }
    else if (r_valor == 0)
    {
        printf("0");
    }

    else
    {
        printf("\n%d", r_valor);
    }
}

int divisao(int n1, int n2)
{
    int soma = 0, cont = 0;

    if (n1 == 0)
    {
        return 0;
    }
    while (soma != n1)
    {
        soma = soma + n2;
        cont++;
        if (soma > n1)
        {
            return 1;
        }
    }
    return cont;
}