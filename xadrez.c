#include <stdio.h>
#include <stdlib.h>
#include "xadrez.h"

void iniciarTabuleiro(char tabuleiro[8][8]){

    const char *posicaoInicial[8] = {
        "rnbqkbnr",
        "pppppppp",
        "........",
        "........",
        "........",
        "........",
        "PPPPPPPP",
        "RNBQKBNR"
    };
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            tabuleiro[i][j] = posicaoInicial[i][j];
            
        }
        
    }
    
}
void mostrarTabuleiro(char tabuleiro[8][8]){
    printf("  a b c d e f g h\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", 8-i);
        for (int j = 0; j < 8; j++)
        {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    

    }
    
