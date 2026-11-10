#include <stdio.h>

int main(void) {
    // ==========================================
    // ATIVIDADE 1 - Primeira entrada com scanf
    // ==========================================
    printf("--- ATIVIDADE 1 ---\n");
    int idadeAtv1;
    
    printf("Digite sua idade: ");
    scanf("%d", &idadeAtv1);
    printf("Voce informou a idade %d.\n\n", idadeAtv1);

    // ==========================================
    // ATIVIDADE 2 - Cadastro numérico simples
    // ==========================================
    printf("--- ATIVIDADE 2 ---\n");
    int idade;
    float altura;
    double peso;
    char conceito;

    // Leitura dos dados
    printf("Digite a idade (int): ");
    scanf("%d", &idade);

    printf("Digite a altura (float): ");
    scanf("%f", &altura);

    printf("Digite o peso (double): ");
    scanf("%lf", &peso);

    // Nota: O espaço antes de %c serve para ignorar o caractere de nova linha (\n) do buffer
    printf("Digite o conceito (char): ");
    scanf(" %c", &conceito);

    // Exibição dos dados formatados
    printf("\n=== DADOS CADASTRADOS ===\n");
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2fm\n", altura);
    printf("Peso: %.2fkg\n", peso);
    printf("Conceito: %c\n", conceito);

    return 0;
}