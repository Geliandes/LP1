#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main()

{
    SetConsoleTitle("Exercicio 6 - Repete Caracter");
    setlocale(LC_ALL, "Portuguese");

    char vetChar[6];
    int iC;
    int vetNum[6];
    int iN = 0;

    for(iN = 0; iN < 6; iN++)
    {
        printf("Digite o número %d: ", iN + 1);
        scanf("%d", &vetNum[iN]);
    }

    printf("\n");

    for(iC = 0; iC < 6; iC++)
    {
        printf("Digite caractere %d: ", iC + 1);
        scanf(" %c", &vetChar[iC]);
    }

    printf("\n");

    for(iN = 0; iN < 6; iN++)
    {
        for(iC=0; iC < vetNum[iN]; iC++)
        {
            printf("%c", vetChar[iN]);
        }

        printf("\n");

    }
}
