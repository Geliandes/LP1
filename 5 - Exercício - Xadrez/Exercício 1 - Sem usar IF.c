#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
/*
0- AUSENCIA DE PEDRAS = 30
1- PE�ES = 17
2- CAVALOS = 6
3- TORRES = 4
4- BISPOS = 3
5- REIS = 2
6- RAINHAS = 2

*/  setlocale(LC_ALL, "Portuguese");
    SetConsoleTitle("Exercicio 1 - Xadrez");

    int linha;
    int coluna;
    int x = 0, y = 0;
    int vetQtdPecas[7] = {0,0,0,0,0,0,0,0};
    int pecas[8][8] =   {{6,0,0,5,0,0,1,0},
                         {0,1,0,2,0,3,0,2},
                         {0,1,1,1,0,1,0,0},
                         {0,0,2,0,3,4,4,3},
                         {1,0,1,1,0,1,0,0},
                         {0,0,1,3,0,4,0,1},
                         {1,0,0,0,2,2,2,1},
                         {1,5,0,6,0,1,1,0}};

    for(linha = 0; linha < 8; linha ++){

        for(coluna = 0; coluna < 8; coluna ++){
        }
    }


     printf("\nAusencia de Pedras: %d pe�as", vetQtdPecas[0]);
     printf("\nPeoes: %d pe�as", vetQtdPecas[1]);
     printf("\nCavalos: %d pe�as", vetQtdPecas[2]);
     printf("\nTorres: %d pe�as", vetQtdPecas[3]);
     printf("\nBispos: %d pe�as", vetQtdPecas[4]);
     printf("\nReis: %d pe�as", vetQtdPecas[5]);
     printf("\nRainhas: %d pe�as\n", vetQtdPecas[6]);
}
