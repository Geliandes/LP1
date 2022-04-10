#include <stdio.h>
#include <string.h>
#include <windows.h>

void main()
{

    SetConsoleTitle("Exercício 2 - String");

    char palavra[100];
    char letra;
    int quantidade = 0;
    int x;

    printf("Informe uma palavra: ");
    fgets(palavra, 100, stdin);
    printf("Informe uma letra: ");
    scanf("%c",&letra);
    letra = tolower(letra);

    for(x = 0; x < strlen(palavra); x++)
    {
        palavra[x] = tolower(palavra[x]);
        if(letra == palavra [x])
            quantidade ++;
    }

    printf("Qtde: %i\n", quantidade);

}
