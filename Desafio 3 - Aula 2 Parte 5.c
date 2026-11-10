#include <stdio.h>

int main(void) {
    double peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%lf", &peso);

    printf("Digite a altura (m): ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    return 0;
}