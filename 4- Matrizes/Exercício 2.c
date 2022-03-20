#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleTitle("Exercicio 2");

    int vetA[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int vetB[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int vetC[20], iC;

    for(iC = 0; iC<=20; iC++)
    {
        vetC[iC] = vetB[iC] + vetA[iC];
    }

    printf("\nVetor C: ");

    for (iC=0; iC<20; iC++)
    {
        printf("%d ", vetC[iC]);
    }

    printf("\n");
}
