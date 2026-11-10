#include <stdio.h>

int dobro(int num) {
    return num * 2;
}

int triplo(int num) {
    return num * 3;
}

int main() {
    int valor;
    
    printf("Digite um número: ");
    scanf("%d", &valor);
    
    printf("Dobro de %d é %d\n", valor, dobro(valor));
    printf("Triplo de %d é %d\n", valor, triplo(valor));
    
    return 0;
}
