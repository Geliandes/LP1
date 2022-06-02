#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Fa�a um programa que receba uma frase ou palavra,
a posi��o inicial, a posi��o final e declare uma
string de destino para armazenar o texto extra�do
da frase/palavra de acordo com as posi��es informadas.

Crie uma fun��o chamada Substring que receba os dados
acima, "quebre" a string de acordo com as posi��es
informadas e armazene a substring na string destino.*/

int main()
{
    char frase[100];
    char destino[100];
    int x = 0, y = 0;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    printf("Posicao Inicial: ");
    scanf("%i", &x);

    printf("Posicao Final: ");
    scanf("%i", &y);

    fSubstring(frase, destino, x, y);

    printf("%s", destino);
}

void fSubstring(char frase[100], char destino[100], int x, int y)
{
    int i = 0;

    for(x; x <= y; x++)
    {
        destino[i] = frase[x];
        i++;
    }

    destino[i] = '\0';
}
