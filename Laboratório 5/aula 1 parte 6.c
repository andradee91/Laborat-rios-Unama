#include <stdio.h>

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b == 0) {
        printf("Erro: divisão por zero não é permitida.\n");
        return 0; 
    }
    return a / b;
}

int main() {
    float num1, num2;
    int opcao;
    float resultado;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    printf("Escolha a operação:\n");
    printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            resultado = soma(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = subtracao(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = multiplicacao(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            resultado = divisao(num1, num2);
            if(num2 != 0)
                printf("Resultado: %.2f\n", resultado);
            break;
        default:
            printf("Opção inválida.\n");
    }
    return 0;
}
