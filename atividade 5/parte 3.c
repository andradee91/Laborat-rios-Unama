#include <stdio.h>
void mostrarMenu() {
    printf("Menu de opções:\n");
    printf("1 - Exibir mensagem de boas-vindas\n");
    printf("2 - Mostrar informações do programa\n");
    printf("3 - Sair\n");
}
void responderOpcao(int opcao) {
    switch(opcao) {
        case 1:
            printf("Bem-vindo! Espero que aproveite o programa.\n");
            break;
        case 2:
            printf("Este programa foi criado para demonstrar funções em C.\n");
            break;
        case 3:
            printf("Saindo do programa. Até logo!\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }
}
int main() {
    int opcao_usuario;
    
    mostrarMenu();
    printf("Escolha uma opção: ");
    scanf("%d", &opcao_usuario);
    
    responderOpcao(opcao_usuario);
    
    return 0;
}