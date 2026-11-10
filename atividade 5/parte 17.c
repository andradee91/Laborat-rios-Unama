// Versão Corrigida
#include <stdio.h>

int main(void) {
    int vetor[5] = {10, 20, 30, 40, 50};
    
    // CORREÇÃO: Condição ajustada para i < 5 para evitar acesso inválido
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, vetor[i]);
    }
    return 0;
}