#include <stdio.h>

float calcularMedia(float n1, float n2) {
    return (n1 + n2) / 2.0;
}

int main() {
    float nota1, nota2;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("A média é %.2f\n", calcularMedia(nota1, nota2));
    return 0;
}
