#include <stdio.h>



void movimentoTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    movimentoTorre(casas - 1);
}


void movimentoBispo(int movimentoVertical, int movimentoHorizontal) {
    for (int i = 0; i < movimentoVertical; i++) {
        for (int j = 0; j < movimentoHorizontal; j++) {
            printf("Cima Direita\n");
        }
    }
}

void movimentoRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    movimentoRainha(casas - 1);
}

void movimentoCavalo(int maxCima, int maxDireita) {
    for (int cima = 0; cima < maxCima; cima++) {
        for (int direita = 0; direita < maxDireita; direita++) {
            if (cima == 2 && direita == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break;
            }
            if (direita == 0) continue;
        }
    }
    printf("\n");
}


int main() {

    //Varieaveis para Torre, Bisbo e Rainha
    const int movimentoTorreCasas = 5;
    const int movimentoBispoCasas = 5;
    const int movimentoRainhaCasas = 8;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    movimentoTorre(movimentoTorreCasas);
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    movimentoBispo(3, 3); 
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    movimentoRainha(movimentoRainhaCasas);
    printf("\n");

    //Movimento do Cavalo          
    printf("Movimento da Cavalo:\n");
    printf("Movimento Cavalo:\n");
    movimentoCavalo(3, 2);

    return 0;
}
