#include<stdio.h>
#include<stdlib.h>
#include"xadrez.h"

void moverPeca(char tabuleiro [8][8], int colOri, int linOri, int colDest,int linDest){
    char    peca = tabuleiro[linOri][colOri];
            tabuleiro[linDest][colDest] = peca;
            tabuleiro[linOri][colOri] = '.';
            printf("Movendo de (%d, %d) para (%d, %d)\n", colOri, linOri, colDest, linDest);

}
void pedirJogada(char ori[3], char dest[3], int *colOri, int *linOri, int *colDest, int *linDest)
{
    
    scanf("%s %s", ori, dest);
    *colOri = ori[0] - 'a';
    *linOri = 8 - (ori[1] - '0');
    *colDest = dest[0] - 'a';
    *linDest = 8 - (dest[1] - '0');
    

}
/*char origem[3];
    char dest[3];
    scanf("%s %s",origem, dest);
    int colOri = origem[0] - 'a', linOri = 8 - (origem[1] - '0'), colDest = dest[0] - 'a', linDest = 8 - (dest[1] - '0'); //conversão;
    moverPeca(tabuleiro, linOri, colOri,linDest,colDest);
    mostrarTabuleiro(tabuleiro);*/