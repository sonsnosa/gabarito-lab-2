#include <stdio.h>

int main()
{
    int numero1, numero2;
    int soma, subtracao, multiplicacao;
    int divisao_inteira, resto;

    float divisao;
    float nota1, nota2, nota3;
    float media;

    printf("===== RESUMO NUMERICO =====\n\n");

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;

    media = (nota1 + nota2 + nota3) / 3;

    printf("\n===== RESULTADOS =====\n");

    printf("\nOPERACOES COM INTEIROS:\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);

    if (numero2 != 0)
    {
        divisao_inteira = numero1 / numero2;
        resto = numero1 % numero2;
        divisao = (float) numero1 / numero2;

        printf("Divisao inteira: %d\n", divisao_inteira);
        printf("Resto da divisao: %d\n", resto);
        printf("Divisao decimal: %.2f\n", divisao);
    }
    else
    {
        printf("Divisao: Nao e possivel dividir por zero.\n");
    }

    printf("\nMEDIA DAS NOTAS:\n");
    printf("Media: %.2f\n", media);

    printf("\n==========================\n");

    return 0;
}