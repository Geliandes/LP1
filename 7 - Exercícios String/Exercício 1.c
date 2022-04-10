#include <stdio.h>

void main()
{
    char vogais[] = {"aeiou"};
    char palavra[100];
    char letra;
    int vet = 0;
    int x, y;

    printf("Digite uma palavra: ");
    gets(palavra);

    for(x = 0; x < strlen(palavra); x++)
    {
        palavra[x] = tolower(palavra[x]);

        for(y = 0; y < strlen(vogais); y++)
        {
            if(palavra[x] == vogais[y])
                vet++;
        }
    }

     printf("\nA palavra possui %i vogais", vet);
     printf("\n\nDigite uma letra para substituir as vogais: ");
     scanf(" %c",&letra);

    for(x = 0; x < strlen(palavra); x++)
    {
        for(y = 0; y < strlen(vogais); y++)
        {
            if(palavra[x] == vogais[y])
                palavra[x] = letra;
        }
    }

printf("\n%s\n", palavra);

}





