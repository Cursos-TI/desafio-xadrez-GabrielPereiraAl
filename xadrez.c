#include <stdio.h>


int main() {

    // Movimento da Torre - for
    const int movimentoTorre = 5;
    int contTorre;
    printf("Movimento da Torre:\n");
    for (contTorre = 0; contTorre < movimentoTorre; contTorre++) {
        printf("Direita\n");
    }

    // Movimento do Bispo : while
    const int movimentoBispo = 5;
    int contBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contBispo < movimentoBispo) {
        printf("Cima Direita\n");
        contBispo++;
    }

    // Movimento da Rainha : do-while
    const int movimentoRainha = 8;
    int contRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contRainha++;
    } while (contRainha < movimentoRainha);

    return 0;
}
