#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

void main()
{

    //Boleto: 3419012345123456789012345678901112340000012345

    setlocale(LC_ALL, "Portuguese");
    SetConsoleTitle("Programa Boleto");

    char numeroBoleto[47];
    char banco[4];
    char valorBoleto[11];

    int valorBoletoInt;
    float valor, multa, total;
    int x, y;

    printf("Digite o número do boleto: ");
    gets(numeroBoleto);

    for(x = 0; x < 47; x ++)
    valorBoleto[x] = toupper(valorBoleto[x]);

    while(strcmp(numeroBoleto,"FIM")!= 0)
    {
        x = 0, y = 0;

        for(x = 0; x < 3; x++)
            banco[x] = numeroBoleto[x];

        if(strcmp(banco,"001")==0)
            printf("\nBanco: Banco do Brasil");
        if(strcmp(banco,"033")==0)
            printf("\nBanco: Santander");
        if(strcmp(banco,"104")==0)
            printf("\nBanco: Caixa Econômica Federal");
        if(strcmp(banco,"341")==0)
            printf("\nBanco: Itaú");
        if(strcmp(banco,"745")==0)
            printf("\nBanco: Citibank");

        for(x = 36; x < 47; x++)
        {
            valorBoleto[y] = numeroBoleto[x];
            y++;
        }

        valorBoletoInt = atoi(valorBoleto);
        valor = (float)valorBoletoInt/100;
        multa = valor * 0.1;
        total = valor + multa;

        printf("\nValor original: %.2f", valor);
        printf("\nMulta: %.2f", multa);
        printf("\nValor total: %.2f\n", total);

        printf("\nDigite o número do boleto: ");
        gets(numeroBoleto);

        for(x = 0; x < 47; x++)
        valorBoleto[x] = toupper(valorBoleto[x]);
    }

    return 0;
}
