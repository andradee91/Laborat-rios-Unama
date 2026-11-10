#include <stdio.h>

void atividade1() {
    printf("\n=== ATIVIDADE 1: Debugging de Lacos ===\n");
    int i;
    
    printf("\n-- Erro A Corrigido --\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n-- Erro B Corrigido --\n");
    i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    printf("\n-- Erro C (Off-by-one) --\n");
    printf("0 ate 9 (10 iteracoes): ");
    for (i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n0 ate 10 (11 iteracoes): ");
    for (i = 0; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void atividade2() {
    printf("\n=== ATIVIDADE 2: Media de N Notas ===\n");
    int quantidade, i;
    float nota, soma = 0;

    printf("Quantidade de notas: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade invalida!\n");
        return;
    }

    for (i = 1; i <= quantidade; i++) {
        printf("Nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    printf("Media: %.2f\n", soma / quantidade);
}

void atividade3() {
    printf("\n=== ATIVIDADE 3: Analise de 10 Numeros ===\n");
    int i;
    float num;
    int positivos = 0, negativos = 0, zeros = 0;
    float soma = 0, maior = 0, menor = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o numero %d/10: ", i);
        scanf("%f", &num);

        soma += num;

        if (num > 0) positivos++;
        else if (num < 0) negativos++;
        else zeros++;

        if (i == 1) {
            maior = num;
            menor = num;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }
    }

    printf("\n--- RESULTADO DA ANALISE ---\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);
    printf("Soma total: %.2f\n", soma);
    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
}

void atividade4() {
    printf("\n=== ATIVIDADE 4: Caixa Eletronico ===\n");
    int valor, resto;

    printf("Digite o valor para saque: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido.\n");
        return;
    }

    resto = valor;

    int n100 = resto / 100; resto %= 100;
    int n50  = resto / 50;  resto %= 50;
    int n20  = resto / 20;  resto %= 20;
    int n10  = resto / 10;  resto %= 10;
    int n5   = resto / 5;   resto %= 5;
    int n2   = resto / 2;   resto %= 2;
    int n1   = resto / 1;   resto %= 1;

    printf("Cedulas para R$ %d:\n", valor);
    printf("Notas 100: %d | 50: %d | 20: %d | 10: %d | 5: %d | 2: %d | 1: %d\n",
           n100, n50, n20, n10, n5, n2, n1);
}

void desafioFinal() {
    int opcao;
    do {
        printf("\n=====================\n   MENU PRINCIPAL\n=====================\n");
        printf("1 - Somar dois numeros\n");
        printf("2 - Calcular media\n");
        printf("3 - Tabuada\n");
        printf("0 - Sair\n");
        printf("=====================\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                float n1, n2;
                printf("\nDigite dois numeros: ");
                scanf("%f %f", &n1, &n2);
                printf("Soma: %.2f\n", n1 + n2);
                break;
            }
            case 2: {
                int qtd, i;
                float nota, soma = 0;
                printf("\nQuantidade de notas: ");
                scanf("%d", &qtd);
                for (i = 1; i <= qtd; i++) {
                    printf("Nota %d: ", i);
                    scanf("%f", &nota);
                    soma += nota;
                }
                if (qtd > 0) printf("Media: %.2f\n", soma / qtd);
                break;
            }
            case 3: {
                int num, i;
                printf("\nDigite um numero para a tabuada: ");
                scanf("%d", &num);
                for (i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n", num, i, num * i);
                }
                break;
            }
            case 0:
                printf("\nEncerrando...\n");
                break;
            default:
                printf("\nOpcao invalida\n");
        }
    } while (opcao != 0);
}

int main(void) {
    int opcaoGeral;

    do {
        printf("\n================ MENU PARTE 5 ================\n");
        printf("1 - Atividade 1 (Debugging de Lacos)\n");
        printf("2 - Atividade 2 (Media de N Notas)\n");
        printf("3 - Atividade 3 (Analise de 10 Numeros)\n");
        printf("4 - Atividade 4 (Caixa Eletronico)\n");
        printf("5 - Desafio Final (Sistema de Menu Integrado)\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoGeral);

        switch (opcaoGeral) {
            case 1: atividade1(); break;
            case 2: atividade2(); break;
            case 3: atividade3(); break;
            case 4: atividade4(); break;
            case 5: desafioFinal(); break;
            case 0: printf("\nPrograma finalizado.\n"); break;
            default: printf("\nOpcao invalida!\n");
        }
    } while (opcaoGeral != 0);

    return 0;
}