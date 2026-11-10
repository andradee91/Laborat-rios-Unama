#include <stdio.h>

int main(void) {
    int a, b;

    printf("Primeiro numero: ");
    scanf("%d", &a);

    printf("Segundo numero: ");
    scanf("%d", &b);

    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    double divisao = (double)a / b;
    int resto = a % b;

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);
    printf("Resto: %d\n", resto);

    return 0;
}