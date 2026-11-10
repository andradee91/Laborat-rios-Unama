#include <stdio.h>

int main(void) {
    // ==========================================
    // MINI-DESAFIO 1 - Divisão com conversão de tipo (casting)
    // ==========================================
    printf("--- MINI-DESAFIO 1 ---\n");
    int a = 10;
    int b = 3;
    float resultado = (float)a / b; // Casting explícito para obter 3.333333
    printf("Resultado: %f\n\n", resultado);

    // ==========================================
    // MINI-DESAFIO 2 - Precedência de operadores
    // ==========================================
    printf("--- MINI-DESAFIO 2 ---\n");
    int resultado1 = (2 + 3) * 4;
    int resultado2 = 2 + 3 * 4;
    printf("(2+3)*4 = %d\n", resultado1);
    printf("2+3*4   = %d\n\n", resultado2);

    // ==========================================
    // MINI-DESAFIO 3 - Incremento (contador)
    // ==========================================
    printf("--- MINI-DESAFIO 3 ---\n");
    int contador = 0;
    contador++;
    contador++;
    contador++;
    printf("Contador final: %d\n\n", contador);

    // ==========================================
    // MINI-DESAFIO 4 - Perda de informação (casting double -> int)
    // ==========================================
    printf("--- MINI-DESAFIO 4 ---\n");
    double valor = 8.75;
    int inteiro = (int)valor; // Converte descartando as casas decimais
    printf("Valor original: %.2f\n", valor);
    printf("Valor convertido: %d\n", inteiro);

    return 0;
}