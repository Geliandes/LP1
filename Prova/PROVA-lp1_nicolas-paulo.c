#include<stdio.h>
#include<string.h>

void fConcatena( char *string1, char *string2, int indice);

int main()
{
    char string1[20], string2[20];
    int indice = 0;

    printf("Digite a string 1: ");
    gets(string1);

    printf("\nDigite a string 2: ");
    gets(string2);

    printf("\nDigite um numero para o indice; ");
    scanf("%i", &indice);

    fConcatena(string1, string2, indice);

    printf("\n%s\n", string1);
}

void fConcatena( char *string1, char *string2, int indice)
{
    int x = 0, y = 0, z = 0, a = 0;

    x = strlen(string1);
    y = indice;
    z = x + strlen(string2) - y;
    a = x;

    for(int i = a; i < z ; i++)
    {
        *(string1+x) = *(string2+ y);
        x++;
        y++;
    }

    *(string1+z)='\0';
}
