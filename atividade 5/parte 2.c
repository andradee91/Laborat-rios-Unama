#include <stdio.h>

void mostrarCabecalho() {
    printf("*****************************\n");
    printf("     Bem-vindo ao Programa    \n");
    printf("*****************************\n");
}

int main() {
    mostrarCabecalho();
    printf("Este é o conteúdo do programa após o cabeçalho.\n");
    mostrarCabecalho();  // Reutilizando o cabeçalho
    printf("Outro conteúdo após o segundo cabeçalho.\n");
    return 0;
}
