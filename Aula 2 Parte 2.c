#include <stdio.h>

int main(void) {
    // ==========================================
    // ATIVIDADE 1 - Prevendo resultados
    // ==========================================
    printf("--- ATIVIDADE 1 ---\n");
    int a = 10;
    int b = 3;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);

    // ==========================================
    // ATIVIDADE 2 - Soma e Operações (Programa Ampliado)
    // ==========================================
    printf("--- ATIVIDADE 2 ---\n");
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao, resto;

    // Leitura dos números
    printf("Primeiro numero: ");
    scanf("%d", &numero1);

    printf("Segundo numero: ");
    scanf("%d", &numero2);

    // Operações aritméticas
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;     // Divisão inteira
    resto = numero1 % numero2;       // Resto da divisão

    // Exibição dos resultados
    printf("\n=== RESULTADOS ===\n");
    printf("Soma = %d\n", soma);
    printf("Subtracao = %d\n", subtracao);
    printf("Multiplicacao = %d\n", multiplicacao);
    printf("Divisao inteira = %d\n", divisao);
    printf("Resto da divisao = %d\n", resto);

    return 0;
}