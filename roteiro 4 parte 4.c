#include <stdio.h>

void atividade1() {
    printf("\n=== ATIVIDADE 1: Maior e Menor Valor ===\n");
    int numero;
    int maior, menor;
    int i;

    printf("Digite o 1o numero: ");
    scanf("%d", &maior);
    menor = maior; // Inicializa ambos com o primeiro valor lido

    for (i = 2; i <= 5; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &numero);
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);
}

void atividade2() {
    printf("\n=== ATIVIDADE 2: Contagem e Soma Condicionadas ===\n");
    int numero, i;
    int positivos = 0;
    int somaPares = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 1; i <= 10; i++) {
        printf("Numero %d/10: ", i);
        scanf("%d", &numero);

        if (numero > 0) {
            positivos++;
        }
        if (numero % 2 == 0) {
            somaPares += numero;
        }
    }

    printf("\n--- RESULTADO ---\n");
    printf("Quantidade de positivos: %d\n", positivos);
    printf("Soma dos numeros pares: %d\n", somaPares);
}

void atividade3() {
    printf("\n=== ATIVIDADE 3: Lacos Aninhados ===\n");
    int linha, coluna, i, j;

    printf("\n--- Padrao 3x4 de Asteriscos ---\n");
    for (linha = 1; linha <= 3; linha++) {
        for (coluna = 1; coluna <= 4; coluna++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n--- Tabela de Multiplicacao 10x10 ---\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}

void atividade4() {
    printf("\n=== ATIVIDADE 4: Comandos break e continue ===\n");
    int i;

    printf("\n-- Demonstracao de break (para ao atingir 10 no laço de 1 a 100): --\n");
    for (i = 1; i <= 100; i++) {
        if (i == 10) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");

    printf("\n-- Demonstracao de continue (pula o numero 5): --\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
}

void desafio() {
    printf("\n=== DESAFIO: Senha com 3 Tentativas ===\n");
    int senha;
    int tentativas = 0;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == 1234) {
            printf("Acesso permitido!\n");
            break;
        }

        printf("Senha incorreta.\n");
        tentativas++;
    }

    if (tentativas == 3) {
        printf("Usuario bloqueado!\n");
    }
}

int main(void) {
    int opcaoGeral;

    do {
        printf("\n================ MENU PARTE 4 ================\n");
        printf("1 - Atividade 1 (Maior e Menor Valor)\n");
        printf("2 - Atividade 2 (Positivos e Soma de Pares)\n");
        printf("3 - Atividade 3 (Lacos Aninhados: Retangulo e Matriz 10x10)\n");
        printf("4 - Atividade 4 (Demonstracao de break e continue)\n");
        printf("5 - Desafio (Sistema de Senha com Bloqueio)\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoGeral);

        switch (opcaoGeral) {
            case 1:
                atividade1();
                break;
            case 2:
                atividade2();
                break;
            case 3:
                atividade3();
                break;
            case 4:
                atividade4();
                break;
            case 5:
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