// Versão Corrigida
#include <stdio.h>

int main(void) {
    int soma = 0; // CORREÇÃO: Inicializado com 0
    for (int i = 1; i <= 5; i++) {
        soma += i;
    }
    printf("Soma total: %d\n", soma);
    return 0;
}