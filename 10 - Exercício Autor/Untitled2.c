#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main(void)
{
    char vet[100];
    char nome[100];
    char sobrenome[100];
    int x,y=0,z=0;

    printf("Digite seu nome completo: ");
    gets(vet);

    for (x=0 ; x< strlen(vet) ; x++)
    {
        nome[y] = vet[x];
        if(vet[x] ==' ')
            x = strlen(vet);
        y++;
    }
    nome[y] = '\0';


    for(x=0 ; x< strlen(vet) ; x++)
    {
        if(vet[x] == ' ')
            z = x;
    }

    y = 0;


    for(x = z+1; x < strlen(vet); x++)
    {
        sobrenome[y] = vet[x]


    }
       printf("%s",sobrenome);
}
