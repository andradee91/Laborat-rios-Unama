#include <stdio.h>

int main() {
    // ==========================================
    // ATIVIDADE 1 - Controlando casas decimais
    // ==========================================
    printf("--- ATIVIDADE 1 ---\n");
    float preco = 19.5f;
    printf("%f\n", preco);
    printf("%.2f\n\n", preco);

    // ==========================================
    // ATIVIDADE 2 - Testando precisão
    // ==========================================
    printf("--- ATIVIDADE 2 ---\n");
    double pi = 3.1415926535;
    
    // 1. Execução dos 3 exemplos do roteiro
    printf("%.2f\n", pi);
    printf("%.4f\n", pi);
    printf("%.8f\n", pi);
    
    // 2. Quarta linha solicitada (6 casas decimais)
    printf("%.6f\n\n", pi);

    // ==========================================
    // ATIVIDADE 3 - Caracteres de escape
    // ==========================================
    printf("--- ATIVIDADE 3 ---\n");
    printf("Linha 1\nLinha 2\nLinha 3\n");
    printf("Nome:\tJoao\n");
    printf("Mensagem: \"Ola!\"\n");
    printf("Caminho: C:\\temp\n\n");

    // ==========================================
    // DESAFIO - Recibo formatado
    // ==========================================
    printf("--- DESAFIO ---\n");
    float precoProduto = 19.50f;

    printf("====================\n");
    printf("\tRECIBO\n");
    printf("====================\n");
    printf("Produto:\tCaderno\n");
    printf("Preco:\t\tR$ %.2f\n", precoProduto);
    printf("Mensagem:\t\"Obrigado!\"\n");
    printf("====================\n");

    return 0;
}