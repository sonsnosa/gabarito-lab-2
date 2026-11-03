#include <stdio.h>

int main()
{
    int idade;
    float altura;
    double peso;
    char conceito;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%lf", &peso);

    printf("Digite seu conceito: ");
    scanf(" %c", &conceito);

    printf("\n===== DADOS INFORMADOS =====\n");

    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Peso: %.2f kg\n", peso);
    printf("Conceito: %c\n", conceito);

    return 0;
}