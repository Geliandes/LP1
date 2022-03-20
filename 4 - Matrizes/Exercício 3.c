#include<stdio.h>
#include <windows.h>

int main()
{
    SetConsoleTitle("Exercicio 3");

    int vetA[25] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int vetB[25] = {26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
    int vetC[50], iA=0, iB=0, iC;

    for(iC = 0; iC <= 49; iC++)
    {
        vetC[iC] = vetA[iA];
        iA++;
        iC++;

        vetC[iC] = vetB[iB];
        iB++;
    }

    printf("\nVetor C: ");

    for(iC = 0; iC <= 49; iC++)
    {
        printf("%d ", vetC[iC]);
    }

    printf("\n");
}
