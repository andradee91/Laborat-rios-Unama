#include <stdio.h>

int main(void) {
    // ==========================================
    // ATIVIDADE 1 e 2 - Maioridade com Chaves e Blocos
    // ==========================================
    printf("--- ATIVIDADES 1 & 2 ---\n");
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Maior de idade\n");
        printf("Entrada permitida\n");
    } else {
        printf("Menor de idade\n");
    }
    printf("\n");

    // ==========================================
    // ATIVIDADES 4 e 5 - Sistema de Aprovação
    // ==========================================
    printf("--- ATIVIDADES 4 & 5 ---\n");
    float media;
    printf("Digite a media: ");
    scanf("%f", &media);

    if (media >= 7.0f) {
        printf("Aprovado\n");
    } else if (media >= 5.0f) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
    printf("\n");

    // ==========================================
    // CORREÇÃO DA ORDEM LÓGICA (Atividade 5)
    // ==========================================
    printf("--- EXEMPLE DE ORDEM CORRETA ---\n");
    float nota;
    printf("Digite uma nota para teste: ");
    scanf("%f", &nota);

    // Ordem correta: da condição mais restritiva para a menos restritiva
    if (nota >= 7.0f) {
        printf("Nota boa\n");
    } else if (nota >= 5.0f) {
        printf("Nota razoavel\n");
    } else {
        printf("Nota insuficiente\n");
    }
    printf("\n");

    // ==========================================
    // DESAFIO - Maior de dois números
    // ==========================================
    printf("--- DESAFIO: Maior de dois numeros ---\n");
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d e maior\n", a);
    } else if (b > a) {
        printf("%d e maior\n", b);
    } else {
        printf("Os numeros sao iguais\n");
    }

    return 0;
}