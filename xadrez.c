#include <stdio.h>
#include <stdlib.h>
#include "xadrez.h"

void iniciarTabuleiro(char tabuleiro[8][8]){//variavel tabuleiro

    const char *posicaoInicial[8] = {//indica a posição inicial das peças
        "rnbqkbnr",
        "pppppppp",
        "........",
        "........",
        "........",
        "........",
        "PPPPPPPP",
        "RNBQKBNR"
    };
    for (int i = 0; i < 8; i++)                     //laço for que percorre as linhas
    {
        for (int j = 0; j < 8; j++)                 //for que percorre as colunas
        {
            tabuleiro[i][j] = posicaoInicial[i][j]; //associa a posiçao com o tabuleiro
            
        }
        
    }
    
}
void mostrarTabuleiro(char tabuleiro[8][8]){
    printf("  a b c d e f g h\n");                  //imprimi as letras das colunas
    for (int i = 0; i < 8; i++)                     //percorre as colunas linkando com a posiçao das peças
    {
        printf("%d ", 8-i);                         //imprime os numeros das linhas
        for (int j = 0; j < 8; j++)
        {
            printf("%c ", tabuleiro[i][j]);         //mostra o tabuleiro
        }
        printf("\n");
    }
    

    }
    
