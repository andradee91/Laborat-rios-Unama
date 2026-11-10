#include <stdio.h>

// Protótipos de conversão declarados antes da main
float celsiusParaFahrenheit(float celsius);
float metrosParaQuilometros(float metros);

int main(void) {
    float tempCelsius = 30.0f;
    float distanciaMetros = 2500.0f;

    printf("--- Teste de Conversoes ---\n");
    printf("%.1f C equivalem a %.1f F\n", tempCelsius, celsiusParaFahrenheit(tempCelsius));
    printf("%.1f metros equivalem a %.2f quilometros\n", distanciaMetros, metrosParaQuilometros(distanciaMetros));

    return 0;
}

// Implementações das funções posicionadas após a main
float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9.0f / 5.0f) + 32.0f;
}

float metrosParaQuilometros(float metros) {
    return metros / 1000.0f;
}