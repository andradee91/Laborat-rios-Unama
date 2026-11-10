#include <stdio.h>

// Responsabilidade 1: Coletar os dados do aluno (Entrada)
void obterNotas(float *n1, float *n2) {
    printf("Digite a primeira nota: ");
    scanf("%f", n1);
    printf("Digite a segunda nota: ");
    scanf("%f", n2);
}

// Responsabilidade 2: Processar a média (Cálculo puro)
float calcularMedia(float n1, float n2) {
    return (n1 + n2) / 2.0f;
}

// Responsabilidade 3: Exibir o resultado e a situação (Apresentação)
void exibirSituacao(float media) {
    printf("Media final: %.2f\n", media);
    if (media >= 6.0f) {
        printf("Situacao: Aprovado!\n");
    } else {
        printf("Situacao: Reprovado.\n");
    }
}

int main(void) {
    float nota1, nota2, media;

    // Fluxo do sistema acadêmico modularizado
    obterNotas(&nota1, &nota2);
    media = calcularMedia(nota1, nota2);
    exibirSituacao(media);

    return 0;
}