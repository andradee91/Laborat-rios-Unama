/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void atividade1() {
    printf("\n=== ATIVIDADE 1: Contador vs Acumulador ===\n");
    int contador = 1;
    int soma = 0;
    while (contador <= 5) {
        soma += contador;
        contador++;
    }
    printf("Soma = %d\n", soma);
}

void atividade2() {
    printf("\n=== ATIVIDADE 2: Soma de 1 ate N ===\n");
    int n;
    int i = 1;
    int soma = 0;
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    while (i <= n) {
        soma += i;
        i++;
    }
    printf("Soma de 1 ate %d = %d\n", n, soma);
}

void atividade3() {
    printf("\n=== ATIVIDADE 3: Media de 5 Notas ===\n");
    int contador = 1;
    float nota;
    float soma = 0;
    
    while (contador <= 5) {
        printf("Nota %d: ", contador);
        scanf("%f", &nota);
        soma += nota;
        contador++;
    }
    float media = soma / 5.0f;
    printf("Media = %.2f\n", media);
}

void atividade4_e_desafio() {
    printf("\n=== ATIVIDADE 4 & DESAFIO: Sentinela e Estatisticas ===\n");
    float nota;
    float soma = 0;
    int quantidade = 0;
    
    printf("Digite uma nota ou -1 para sair: ");
    scanf("%f", &nota);
    
    while (nota != -1) {
        soma += nota;
        quantidade++;
        printf("Digite uma nota ou -1 para sair: ");
        scanf("%f", &nota);
    }
    
    if (quantidade > 0) {
        printf("\n--- ESTATISTICAS ---\n");
        printf("Quantidade de notas digitadas: %d\n", quantidade);
        printf("Soma total das notas: %.2f\n", soma);
        printf("Media = %.2f\n", soma / quantidade);
    } else {
        printf("\nNenhuma nota foi digitada.\n");
    }
}

int main() {
    int opcao;
    
    do {
        printf("\n================ MENU DE EXERCICIOS ================\n");
        printf("1 - Atividade 1 (Exemplo Contador/Acumulador)\n");
        printf("2 - Atividade 2 (Soma de 1 ate N)\n");
        printf("3 - Atividade 3 (Media de 5 Notas)\n");
        printf("4 - Atividade 4 & Desafio (Sentinela -1)\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
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
                atividade4_e_desafio();
                break;
            case 0:
                printf("\nEncerrando o programa...\n");
                break;
            default:
                printf("\nOpcao invalida!\n");
        }
    } while (opcao != 0);
    
    return 0;
}