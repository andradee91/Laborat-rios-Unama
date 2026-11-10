#include <stdio.h>

// Função base: mostra a tabuada de apenas um número específico
void mostrarTabuada(int numero) {
    printf("--- Tabuada do %d ---\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    printf("\n");
}

// Função composta: reutiliza mostrarTabuada() para exibir um intervalo de tabuadas
void mostrarTabuadas(int inicio, int fim) {
    for (int i = inicio; i <= fim; i++) {
        mostrarTabuada(i); // Reutilização da função unitária
    }
}

int main(void) {
    // Exibe as tabuadas do 2 até o 4 usando reutilização
    mostrarTabuadas(2, 4);

    return 0;
}