#include <stdio.h>
#include <stdbool.h>

int main(void) {
    // ==========================================
    // DEBUGGING GUIADO (Demonstração dos erros corrigidos)
    // ==========================================
    printf("--- DEBUGGING GUIADO (ERROS CORRIGIDOS) ---\n");
    int opcao = 1;
    int idadeTeste = 20;

    // Erro 1 Corrigido: Uso de == em vez de =
    if (opcao == 1) {
        printf("Erro 1 Corrigido: Opcao 1 selecionada via comparacao (==)\n");
    }

    // Erro 2 Corrigido: Sem ponto e virgula apos a condicao do if
    if (idadeTeste >= 18) {
        printf("Erro 2 Corrigido: Bloco condicionado executado corretamente\n");
    }

    // Erro 3 Corrigido: Uso do operador OU (||) para condicao de fora da faixa
    if (idadeTeste < 18 || idadeTeste > 65) {
        printf("Fora da faixa etaria (menor que 18 OU maior que 65)\n");
    } else {
        printf("Erro 3 Corrigido: Idade %d esta dentro da faixa (18 a 65)\n", idadeTeste);
    }

    // Erro 4 Corrigido: Decomposicao em duas comparacoes ligadas por &&
    if (idadeTeste >= 18 && idadeTeste <= 65) {
        printf("Erro 4 Corrigido: Faixa permitida (18 <= idade <= 65)\n");
    }
    printf("\n");

    // ==========================================
    // MINI LABORATÓRIO - Controle de Acesso
    // ==========================================
    printf("--- MINI LABORATORIO: Controle de Acesso ---\n");
    int idade, senha, bloqueadoInt;
    bool bloqueado;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Senha numerica: ");
    scanf("%d", &senha);
    printf("Bloqueado? (1=sim, 0=nao): ");
    scanf("%d", &bloqueadoInt);
    bloqueado = (bloqueadoInt != 0);

    // Segunda etapa: Verificação com mensagens específicas para cada motivo de recusa
    if (idade >= 18 && senha ==