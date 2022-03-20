#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleTitle("Exercicio 1");

    int vetA[10] = {23,27,10,15,20,25,30,35,20,26};
    int vetB[10], i, x=0;


    for(i=9;i>=0;i--)
    {
        vetB[x] = vetA[i];
        x++;
    }

    printf("\nVetor B: ");

    for (i=0;i<10;i++)
    {
        printf("%d ", vetB[i]);
    }
}
