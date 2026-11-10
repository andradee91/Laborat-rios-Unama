#include <stdio.h>


int variavelGlobal = 500;

void funcaoDemonstracao(void) {
 
    printf("[Funcao] Acessando variavel global: %d\n", variavelGlobal);
    
    
}

int main(void) {
   
    int variavelLocalMain = 10;

    printf("[Main] Variavel local: %d\n", variavelLocalMain);
    printf("[Main] Variavel global: %d\n", variavelGlobal);

    funcaoDemonstracao();


    {
        int variavelDeBloco = 50;
        printf("[Bloco] Variavel de bloco interna: %d\n", variavelDeBloco);
        printf("[Bloco] Ve a variavel local da main: %d\n", variavelLocalMain);
    } 


    return 0;
}