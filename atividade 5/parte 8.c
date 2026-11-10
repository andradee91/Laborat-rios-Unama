#include <stdio.h>


int adicionarUmComRetorno(int valor) {
    return valor + 1;
}


void adicionarUmPorPonteiro(int *valor) {
    *valor = *valor + 1; // Altera o valor armazenado no endereço apontado
}

int main(void) {
    // Teste 1: Usando Retorno
    int x = 10;
    printf("Original x: %d\n", x);
    
    x = adicionarUmComRetorno(x); // Reatribuição obrigatória
    printf("Atualizado com retorno (x): %d\n", x);

    printf("-----------------------------------\n");

    
    int y = 20;
    printf("Original y: %d\n", y);
    
    adicionarUmPorPonteiro(&y);  // Passa o endereço de memória de y (&y)
    printf("Atualizado por ponteiro (y): %d\n", y);

    return 0;
}