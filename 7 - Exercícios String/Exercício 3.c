#include <stdio.h>
#include <string.h>
#include <windows.h>

void main()
{
    char string[100];
    char caractere;
    int vetor[100];
    int x;

    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    printf("Digite o caractere: ");
    scanf("%c", &caractere);

    printf("Indices onde ocorrem o caratere %c: ", caractere);

    for(x = 0; x < strlen(string); x++)
    {
        string[x] = tolower(string[x]);

        if(string[x] == caractere)
        {
            vetor[x] = x;
            printf("%i ", vetor[x]);
        }
    }

    printf("\n");
}
