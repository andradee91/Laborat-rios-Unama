#include <stdio.h>

int main(void) {
    int num1, num2;
    float nota1, nota2, nota3;

    // Entrada dos inteiros
    printf("=== ENTRADA DE INTEIROS ===\n");
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    // Entrada das notas
    printf("\n=== ENTRADA DE NOTAS ===\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Processamento
    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    double divisao = (double)num1 / num2;
    int resto = num1 % num2;
    float media = (nota1 + nota2 + nota3) / 3.0f;

    // Saída dos resultados
    printf("\n====================================\n");
    printf("          RESUMO NUMERICO           \n");
    printf("====================================\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);
    printf("Resto: %d\n", resto);
    printf("------------------------------------\n");
    printf("Media das notas: %.2f\n", media);
    printf("====================================\n");

    return 0;
}