#include <stdio.h>

void atividade1() {
    printf("\n=== ATIVIDADE 1: Estrutura for bsica ===\n");
    int i;
    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
}

void atividade2() {
    printf("\n=== ATIVIDADE 2: Contagens Variadas ===\n");
    int i;
    
    printf("\n--- Crescente (1 a 10) ---\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n--- Decrescente (10 a 1) ---\n");
    for (i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n--- Passo 2 (Pares de 0 a 10) ---\n");
    for (i = 0; i <= 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n--- Exercicio Modificado (mpares de 1 a 19) ---\n");
    for (i = 1; i <= 19; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

void atividade3() {
    printf("\n=== ATIVIDADE 3: Tabuada de um Numero ===\n");
    int numero, i;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    printf("\nTabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

void atividade4() {
    printf("\n=== ATIVIDADE 4: Somatorio e Fatorial ===\n");
    int i;
    
    // 1. Somatrio de 1 at 100
    int soma = 0;
    for (i = 1; i <= 100; i++) {
        soma += i;
    }
    printf("Somatorio de 1 ate 100 = %d\n", soma);

    // 2. Calculo de Fatorial
    int n;
    long long fatorial = 1;
    printf("\nDigite um numero inteiro positivo para calcular o fatorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao existe fatorial para numeros negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("%d! = %lld\n", n, fatorial);
    }
}

void desafio() {
    printf("\n=== DESAFIO: Tabuadas do 1 ao 10 (Lacos Aninhados) ===\n");
    int i, j;
    for (i = 1; i <= 10; i++) {
        printf("=== TABUADA DO %d ===\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %2d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}

int main(void) {
    int opcaoGeral;
    
    do {
        printf("\n================ MENU PARTE 3 ================\n");
        printf("1 - Atividade 1 (Estrutura for)\n");
        printf("2 - Atividade 2 (Contagens: Crescente, Decrescente, Impares)\n");
        printf("3 - Atividade 3 (Tabuada de um Numero Especifico)\n");
        printf("4 - Atividade 4 (Somatorio 1-100 e Fatorial)\n");
        printf("5 - Desafio (Todas as Tabuadas do 1 ao 10)\n");
        printf("0 - Sair do Programa Principal\n");
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