/*Escreva uma função chamada "replace" que recebe
um parâmetro (string) e retorna um número inteiro.
A função substitui todos os espaços da string pelo
caracter '-', e retorna o número de substituições feitas.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleTitle("Replace do Gelado");

    int contador;
    char texto[100];

    printf("Digite um texto: ");
    gets(texto);
    contador = replace(texto);
    printf("\n\nA quantidade de substituições foram: %i\n", contador);
}

int replace(char *texto)
{
    int contador = 0;

    for(int x = 0; x < strlen(texto); x++)
    {
        if(*(texto+x) == ' ')
        {
            *(texto+x) = '-';
            contador++;
        }
    }

    printf("O novo texto eh: %s", texto);

    return(contador);
}
