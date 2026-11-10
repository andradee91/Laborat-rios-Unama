#include <stdio.h>

#define PI 3.14159f

// Retorna 1 se for par e 0 se for ímpar
int ehPar(int n) {
    return (n % 2 == 0);
}

// Retorna 1 se tiver 18 anos ou mais, e 0 caso contrário
int podeEntrar(int idade) {
    return (idade >= 18);
}

// Calcula e retorna a área de um círculo dado o seu raio
float calcularAreaCirculo(float raio) {
    return PI * raio * raio;
}

int main(void) {
    // Testes rápidos das funções
    printf("O numero 4 eh par? %d\n", ehPar(4));
    printf("Idade 20 pode entrar? %d\n", podeEntrar(20));
    printf("Area do circulo de raio 5.0: %.2f\n", calcularAreaCirculo(5.0f));

    return 0;
}