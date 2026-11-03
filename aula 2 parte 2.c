#include <stdio.h>

int main(void)
{
    int numero1;
    int numero2;
    int soma;
    int subtracao;
    int multiplicacao;
    int divisao;

    printf("Primeiro numero: ");
    scanf("%d", &numero1);

    printf("Segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("\n===== RESULTADOS =====\n");

    printf("Soma = %d\n", soma);
    printf("Subtracao = %d\n", subtracao);
    printf("Multiplicacao = %d\n", multiplicacao);
    printf("Divisao inteira = %d\n", divisao);

    return 0;
}