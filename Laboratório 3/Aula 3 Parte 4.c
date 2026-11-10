#include <stdio.h>

int main(void) {
    // ==========================================
    // EXERCÍCIO 1 - Par ou Ímpar
    // ==========================================
    printf("--- EXERCICIO 1: Par ou Impar ---\n");
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }
    printf("\n");

    // ==========================================
    // EXERCÍCIO 2 - Classificação de Nota
    // ==========================================
    printf("--- EXERCICIO 2: Classificacao de Nota ---\n");
    float nota;
    printf("Digite a nota (0.0 a 10.0): ");
    scanf("%f", &nota);

    if (nota >= 9.0f) {
        printf("Excelente\n");
    } else if (nota >= 7.0f) {
        printf("Bom\n");
    } else if (nota >= 5.0f) {
        printf("Regular\n");
    } else {
        printf("Insuficiente\n");
    }
    printf("\n");

    // ==========================================
    // EXERCÍCIO 3 - Aprovação com Nota e Frequência
    // ==========================================
    printf("--- EXERCICIO 3: Aprovacao com Motivo ---\n");
    float media, frequencia;
    printf("Digite a media: ");
    scanf("%f", &media);
    printf("Digite a frequencia (%%): ");
    scanf("%f", &frequencia);

    if (media >= 7.0f && frequencia >= 75.0f) {
        printf("Aprovado\n");
    } else if (media < 7.0f && frequencia < 75.0f) {
        printf("Reprovado por nota e frequencia\n");
    } else if (media < 7.0f) {
        printf("Reprovado por nota\n");
    } else {
        printf("Reprovado por frequencia\n");
    }
    printf("\n");

    // ==========================================
    // EXERCÍCIO 4 - Cálculo e Classificação do IMC
    // ==========================================
    printf("--- EXERCICIO 4: Calculo do IMC ---\n");
    double peso, altura, imc;

    printf("Peso (kg): ");
    scanf("%lf", &peso);
    printf("Altura (m): ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Peso adequado\n");
    } else if (imc < 30.0) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }
    printf("\n");

    // ==========================================
    // EXERCÍCIO 5 - Sistema de Desconto
    // ==========================================
    printf("--- EXERCICIO 5: Sistema de Desconto ---\n");
    double valorCompra, valorDesconto, valorFinal;

    printf("Digite o valor da compra (R$): ");
    scanf("%lf", &valorCompra);

    if (valorCompra >= 500.0) {
        valorDesconto = valorCompra * 0.10; // 10% de desconto
    } else if (valorCompra >= 200.0) {
        valorDesconto = valorCompra * 0.05; // 5% de desconto
    } else {
        valorDesconto = 0.0;
    }

    valorFinal = valorCompra - valorDesconto;

    printf("Valor original : R$ %.2f\n", valorCompra);
    printf("Desconto       : R$ %.2f\n", valorDesconto);
    printf("Valor final    : R$ %.2f\n", valorFinal);

    return 0;
}