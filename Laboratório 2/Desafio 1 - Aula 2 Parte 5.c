#include <stdio.h>

int main(void) {
    double celsius;
    double fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    // Uso de 9.0 / 5.0 para evitar a divisão inteira (9 / 5 = 1)
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    printf("%.2f C = %.2f F\n", celsius, fahrenheit);

    return 0;
}