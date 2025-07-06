#include <stdio.h>
#include <stdlib.h>
#include "xadrez.h"

void iniciarTabuleiro(char tabuleiro[8][8]) {
    const char *posicaoInicial[8] = {
        "rnbqkbnr",
        "pppppppp",
        "        ",
        "        ",
        "        ",
        "        ",
        "PPPPPPPP",
        "RNBQKBNR"
    };

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            tabuleiro[i][j] = posicaoInicial[i][j];
        }
    }
}

void mostrarTabuleiro(char tabuleiro[8][8]) {
    printf("  A B C D E F G H\n");  // Cabeçalho (colunas)
    for (int i = 0; i < 8; i++) {
        printf("%d ", 8 - i);        // Número da linha
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                // Casas com fundo fundo branco
                printf("\033[30;47m%c \033[0m", tabuleiro[i][j]);
            } else {
                // Casas com verde claro
                printf("\033[37;42m%c \033[0m", tabuleiro[i][j]);
                
            }
        }
        printf("\n");
    }
}
