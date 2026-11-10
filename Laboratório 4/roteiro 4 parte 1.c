#include <stdio.h>

void atividade1() {
    printf("\n=== ATIVIDADE 1: Primeiro do-while (Validar Positivo) ===\n");
    int numero;
    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);
    
    printf("Numero positivo aceito: %d\n", numero);
}

void atividade3() {
    printf("\n=== ATIVIDADE 3: Menu de Cadastro e Consulta ===\n");
    int opcao;
    do {
        printf("\n--- MENU ATIVIDADE 3 ---\n");
        printf("1 - Cadastrar\n");
        printf("2 - Consultar\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Cadastrar\n");
                break;
            case 2:
                printf("Consultar\n");
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 0);
}

void atividade4() {
    printf("\n=== ATIVIDADE 4: Validacao de Nota (0 a 10) ===\n");
    float nota;
    printf("Digite uma nota entre 0 e 10: ");
    scanf("%f", &nota);
    
    while (nota < 0 || nota > 10) {
        printf("Nota invalida. Digite novamente: ");
        scanf("%f", &nota);
    }
    
    printf("Nota aceita: %.2f\n", nota);
}

void desafio() {
    printf("\n=== DESAFIO: Menu com Confirmacao ===\n");
    int opcao;
    do {
        printf("\n--- MENU DESAFIO ---\n");
        printf("1 - Mostrar mensagem\n");
        printf("2 - Mostrar seu nome\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Bem-vindo ao sistema de programas em C!\n");
                break;
            case 2:
                printf("Nome do Aluno: Renan Gabriel Lopes\n");
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 0);
}

int main(void) {
    int opcaoGeral;
    
    do {
        printf("\n================ MENU PARTE 2 ================\n");
        printf("1 - Atividade 1 (Validar Numero Positivo)\n");
        printf("2 - Atividade 3 (Menu Cadastrar/Consultar)\n");
        printf("3 - Atividade 4 (Validacao de Nota 0 a 10)\n");
        printf("4 - Desafio (Menu Mensagem e Nome)\n");
        printf("0 - Sair do Programa Principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoGeral);
        
        switch (opcaoGeral) {
            case 1:
                atividade1();
                break;
            case 2:
                atividade3();
                break;
            case 3:
                atividade4();
                break;
            case 4:
                desafio();
                break;
            case 0:
                printf("\nPrograma finalizado com sucesso.\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcaoGeral != 0);
    
    return 0;
}