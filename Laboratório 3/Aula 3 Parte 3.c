#include <stdio.h>

int main(void) {
    // ==========================================
    // ATIVIDADE 1 - Primeiro switch
    // ==========================================
    printf("--- ATIVIDADE 1 ---\n");
    int opcaoMenu;

    printf("1 - Cadastrar\n");
    printf("2 - Consultar\n");
    printf("3 - Sair\n");
    printf("Opcao: ");
    scanf("%d", &opcaoMenu);

    switch (opcaoMenu) {
        case 1:
            printf("Cadastrar\n");
            break;
        case 2:
            printf("Consultar\n");
            break;
        case 3:
            printf("Sair\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }
    printf("\n");

    // ==========================================
    // ATIVIDADE 2 - Experimento Fall-through
    // ==========================================
    printf("--- ATIVIDADE 2: Teste de Fall-through ---\n");
    int testeOption = 1;

    printf("Execucao SEM break (Fall-through):\n");
    switch (testeOption) {
        case 1:
            printf("Um\n");
        case 2:
            printf("Dois\n");
    }

    printf("\nExecucao COM break:\n");
    switch (testeOption) {
        case 1:
            printf("Um\n");
            break;
        case 2:
            printf("Dois\n");
            break;
    }
    printf("\n");

    // ==========================================
    // ATIVIDADE 4 & DESAFIO - Calculadora com Menu Ampliado
    // ==========================================
    printf("--- ATIVIDADE 4 & DESAFIO: Calculadora ---\n");
    float a, b, resultado;
    int opcaoCalc;

    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Resto da Divisao Inteira (Desafio)\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcaoCalc);

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    switch (opcaoCalc) {
        case 1:
            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (b != 0) {
                resultado = a / b;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Divisao por zero nao permitida\n");
            }
            break;
        case 5:
            // O operador % requer números inteiros
            if ((int)b != 0) {
                int resto = (int)a % (int)b;
                printf("Resto da divisao: %d\n", resto);
            } else {
                printf("Divisao por zero nao permitida\n");
            }
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }

    return 0;
}