// xadrez.h
void iniciarTabuleiro(char tabuleiro[8][8]);
void mostrarTabuleiro(char tabuleiro[8][8]);
void moverPeca(char tabuleiro [8][8], int colOri, int linOri, int colDest,int linDest);
void pedirJogada(char ori[3], char dest[3], int *colOri, int *linOri, int *colDest, int *linDest);