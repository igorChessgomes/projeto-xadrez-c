#include<stdio.h>
#include<stdlib.h>
#include"xadrez.h"
//funçao mover peças
void moverPeca(char tabuleiro[8][8], int linOri, int colOri, int linDest, int colDest){
    /*linOri = linha origem, colOri = coluna origem, linDest = linha destino, colDest = coluna destino*/
    char peca = tabuleiro[linOri][colOri];
    tabuleiro[linDest][colDest] = peca;
    tabuleiro[linOri][colOri] = '.';

    printf("Movendo de (%d, %d) para (%d, %d)\n", linOri, colOri, linDest, colDest);
}
    //pede a jogada a ser executada
void pedirJogada(char ori[3], char dest[3], int *colOri, int *linOri, int *colDest, int *linDest)
    //ori = origem, dest = destino
{
    
    scanf("%s %s", ori, dest);
    *colOri = ori[0] - 'a';
    *linOri = 8 - (ori[1] - '0');
    *colDest = dest[0] - 'a';
    *linDest = 8 - (dest[1] - '0');
    

}