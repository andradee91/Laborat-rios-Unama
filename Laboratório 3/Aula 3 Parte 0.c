#include <stdio.h>
#include <stdbool.h> // Necessario para o tipo bool, true e false

int main(void) {
    // ==========================================
    // ATIVIDADE 1 - Primeira decisão (if)
    // ==========================================
    printf("--- ATIVIDADE 1 ---\n");
    int idadeAtv1;
    printf("Digite sua idade: ");
    scanf("%d", &idadeAtv1);

    if (idadeAtv1 >= 18) {
        printf("Entrada permitida\n");
    }
    printf("Fim do programa\n\n");

    // ==========================================
    // ATIVIDADE 2 - Booleanos em C
    // ==========================================
    printf("--- ATIVIDADE 2 ---\n");
    bool ativo = true;
    bool bloqueado = false;

    printf("ativo = %d\n", ativo);
    printf("bloqueado = %d\n\n", bloqueado);

    // ==========================================
    // ATIVIDADE 3 - Operadores relacionais e lógicos
    // ==========================================
    printf("--- ATIVIDADE 3 ---\n");
    int x = 10;
    int y = 5;

    printf("x > y       : %d\n", x > y);
    printf("x == 10     : %d\n", x == 10);
    printf("x != 10     : %d\n", x != 10);
    printf("x > 5 && y < 10 : %d\n", x > 5 && y < 10);
    printf("x < 5 || y == 5 : %d\n", x < 5 || y == 5);
    printf("!(x == 10)  : %d\n\n", !(x == 10));

    // ==========================================
    // ATIVIDADE 4 - Atribuição (=) vs Comparação (==)
    // ==========================================
    printf("--- ATIVIDADE 4 ---\n");
    int idadeTeste = 15;

    printf("Trecho A (Comparacao): ");
    if (idadeTeste == 18) {
        printf("Voce tem 18 anos\n");
    } else {
        printf("Nao tem 18 anos (Condicao falsa)\n");
    }

    printf("Trecho B (Atribuicao acidental): ");
    if ((idadeTeste = 18)) { // Atribui 18 a idadeTeste (retorna 18/verdadeiro)
        printf("Voce tem 18 anos (Executou porque 18 != 0)\n\n");
    }

    // ==========================================
    // DESAFIO - Verificador de maioridade
    // ==========================================
    printf("--- DESAFIO ---\n");
    int idadeUsuario;

    printf("Digite a sua idade: ");
    scanf("%d", &idadeUsuario);

    if (idadeUsuario >= 18) {
        printf("Maior de idade\n");
    }

    return 0;
}