// Versão Corrigida
#include <stdio.h>

int main(void) {
    int x = 5;
    if (x == 10) { // CORREÇÃO: Usado '==' para comparação
        printf("X é igual a 10\n");
    } else {
        printf("X nao é 10 (valor atual: %d)\n", x);
    }
    return 0;
}