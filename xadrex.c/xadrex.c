#include <stdio.h>

int main() {

    /* 
       MOVIMENTO DA TORRE
       Estrutura usada: FOR
       A Torre se move em linha reta.
       Simulação: 5 casas para a direita.
        */

    int casasTorre = 5;
    int i;

    printf("Movimento da Torre:\n");

    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    /* 
       MOVIMENTO DO BISPO
       Estrutura usada: WHILE
       O Bispo se move na diagonal.
       Simulação: 5 casas para cima e à direita.
       A diagonal é representada pela combinação de direções.
        */

    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");

    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    /* 
       MOVIMENTO DA RAINHA
       Estrutura usada: DO-WHILE
       A Rainha se move em todas as direções.
       Simulação: 8 casas para a esquerda.
        */

    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}

