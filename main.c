#include<stdio.h>
#include<stdlib.h>
#include"xadrez.h"

int main()
{
    char ori[3], dest[3];
    int colOri, linOri, colDest, linDest;
    char tabuleiro[8][8];
    //iniciarTabuleiro(tabuleiro);
    iniciarTabuleiro(tabuleiro);
    mostrarTabuleiro(tabuleiro);
    while (1)
    {
        
        pedirJogada(ori, dest, &linOri, &colOri, &linDest, &colDest);
        if(ori[0] == '0' && ori[1] == '0' && dest[0] == '0' && dest[1] == '0'){
            printf("Jogo encerrado");
            break;
        }
        moverPeca(tabuleiro, linOri, colOri, linDest, colDest); // LINHA primeiro, depois COLUNA
        system("cls");
        mostrarTabuleiro(tabuleiro);
    }
    
    
    
    
    //leitura do movimento;
    
    return 0;
}
// Compile with: gcc main.c xadrez.c movimentacao.c -o xadrez
// Run with: ./xadrez
