#include <stdio.h>

// 1. Protótipo da função (informa ao compilador a assinatura antes da main)
int somar(int a, int b);

int main(void) {
    int num1 = 10;
    int num2 = 25;
    
    // Chamada da função
    int resultado = somar(num1, num2);
    
    printf("A soma de %d + %d = %d\n", num1, num2, resultado);
    return 0;
}

// 2. Implementação da função após a main
int somar(int a, int b) {
    return a + b;
}