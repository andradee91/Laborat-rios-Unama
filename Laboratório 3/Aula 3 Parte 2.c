#include <stdio.h>
#include <stdbool.h>

int main(void) {
    // ==========================================
    // ATIVIDADE 1 - E lógico (&&) e Intervalos
    // ==========================================
    printf("--- ATIVIDADE 1 ---\n");
    int idadeAtv1;
    printf("Digite a idade para verificar a faixa etaria: ");
    scanf("%d", &idadeAtv1);

    if (idadeAtv1 >= 18 && idadeAtv1 <= 65) {
        printf("Faixa etaria permitida\n");
    } else {
        printf("Fora da faixa etaria permitida\n");
    }
    printf("\n");

    // ==========================================
    // ATIVIDADE 2 - OU (||) e Negação (!)
    // ==========================================
    printf("--- ATIVIDADE 2 ---\n");
    int dia;
    printf("Digite o dia da semana (1-7): ");
    scanf("%d", &dia);

    if (dia == 6 || dia == 7) {
        printf("Fim de semana\n");
    } else {
        printf("Dia util\n");
    }

    bool bloqueado = false;
    if (!bloqueado) {
        printf("Acesso permitido (Usuario nao esta bloqueado)\n");
    }
    printf("\n");

    // ==========================================
    // ATIVIDADE 3 - Composição de Regras
    // ==========================================
    printf("--- ATIVIDADE 3 ---\n");
    // Regra 1: Aprovação por média e frequência
    float media = 7.5f;
    float frequencia = 80.0f;
    if (media >= 7.0f && frequencia >= 75.0f) {
        printf("Regra 1: Aprovado por media e frequencia\n");
    }

    // Regra 2: Desconto para estudante ou idoso
    bool estudante = false;
    int idadeCliente = 62;
    if (estudante || idadeCliente >= 60) {
        printf("Regra 2: Desconto aplicado\n");
    }

    // Regra 3: Entrada por idade e status de bloqueio
    int idadeUsuario = 20;
    bool usuarioBloqueado = false;
    if (idadeUsuario >= 18 && !usuarioBloqueado) {
        printf("Regra 3: Entrada permitida\n");
    }
    printf("\n");

    // ==========================================
    // ATIVIDADE 4 - Precedência e Parênteses
    // ==========================================
    printf("--- ATIVIDADE 4 ---\n");
    int idadeP = 20, ativoP = 1, adminP = 0;
    if ((idadeP >= 18 && ativoP == 1) || adminP == 1) {
        printf("Acesso concedido pela regra explicita com parenteses\n");
    }
    printf("\n");

    // ==========================================
    // ATIVIDADE 5 - Curto-circuito
    // ==========================================
    printf("--- ATIVIDADE 5 ---\n");
    int x;
    printf("Digite o valor de x para teste de curto-circuito (ex: 0, 2 ou 5): ");
    scanf("%d", &x);

    // Se x == 0, a primeira parte é falsa e o C NÃO avalia 10/x, evitando divisão por zero
    if (x != 0 && 10 / x > 2) {
        printf("Condicao verdadeira para x = %d\n", x);
    } else {
        printf("Condicao falsa ou x igual a zero (evitou erro de divisao por zero)\n");
    }
    printf("\n");

    // ==========================================
    // ATIVIDADE 6 - if aninhado
    // ==========================================
    printf("--- ATIVIDADE 6 ---\n");
    bool usuarioValido = true;
    bool senhaCorreta = false;

    if (usuarioValido) {
        if (senhaCorreta) {
            printf("Login