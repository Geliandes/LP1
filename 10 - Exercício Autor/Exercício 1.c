#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Implemente um programa que receba um nome completo e,
através de uma FUNÇÃO,  apresente apenas o último nome
e o primeiro nome na seguinte forma: último, primeiro nome.

Exemplo: Entrada: Rafael Paes Oliveira
           Saída: Oliveira, Rafael
*/

int main()
{
    fSeparaNome();
    return 0;
}

int fSeparaNome()
{
    char nome[100];
    char saidaNome[100];
    char saidaSobrenome[100];
    char saida[100];
    int x, y = 0, z = 0;

    printf("Digite seu nome completo: ");
    gets(nome);

    for(x = 0; x < strlen(nome); x++)
    {
        saidaNome[y] = nome[x];
        if(nome[x] == ' ')
            x = strlen(nome);
        y++;
    }

    saidaNome[y] = '\0';

    for(x = 0; x < strlen(nome); x++)
    {
        if(nome[x] == ' ')
            z = x;
    }

    y=0;

    for(x = z+1; x < strlen(nome); x++)
    {
        saidaSobrenome[y] = nome[x];
        y++;
    }
    saidaSobrenome[y] = '\0';

    printf("\n%s, %s\n", saidaSobrenome, saidaNome);

    return 0;
}
