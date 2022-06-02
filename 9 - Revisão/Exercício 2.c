#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char palavra[11], letra1, letra2;


    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    printf("Digite a letra que deseja substituir: ");
    scanf(" %c",&letra1);

    printf("Digite a letra para substituir: ");
    scanf(" %c",&letra2);

    fPalavra(palavra, letra1, letra2);

    printf("\n%s\n", palavra);
}

    void fPalavra(char *palavra[], char letra1, char letra2)
    {

        letra1 = tolower(letra1);

        for(int x = 0; x < strlen(palavra); x++)
        {
            palavra[x] = tolower(palavra[x]);
            if(palavra[x] == letra1)
            {
            palavra[x] = letra2;
            }
        }
    }
