
#include <stdio.h>

int multiplicar(int a, int b) {
    return a * b; 
}

int main(void) {
    int resultado = multiplicar(4, 5);
    printf("Resultado: %d\n", resultado);
    return 0;
}