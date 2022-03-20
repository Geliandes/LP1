#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int idade, dependentes;

int entrada()
{
    printf(">>>>>>>> Bem vindo(a) ao Clube Fatecland <<<<<<<<");
    printf("\n\nPreencha com seus dados abaixo para verificar o valor do plano");
    printf("\n\nDigite a sua idade: ");
    scanf("%i", &idade);

    if(idade < 16)
        printf("\nVocê não tem idade suficiente para comprar um plano!\n");

    else
    {
        printf("Digite o número de dependentes: ");
        scanf("%i", &dependentes);
    }
}

float fJovem()
{
    float matricula, mensalidade, total;

    if(idade >= 16 && idade < 20 && dependentes == 0)
    {
        matricula = 200;
        mensalidade = 30;
        total = matricula + mensalidade * 12;
        printf("\n----- Plano Jovem -----");
        printf("\n\nDependentes: %i",dependentes);
        printf("\nValor total: %.2f\n", total);
    }

    else if(idade >= 16 && idade < 20 && dependentes > 0)
    {
        matricula = 200;
        mensalidade = 30 + 10 * dependentes;
        total = matricula + mensalidade * 12;
        printf("\n----- Plano Jovem -----");
        printf("\n\nDependentes: %i",dependentes);
        printf("\nValor total: %.2f\n", total);
    }
}

float fAdulto()
{
    float matricula, mensalidade, total;

    if(idade >= 20 && dependentes == 0)
    {
        matricula = 300;
        mensalidade = 60 * 0.95;
        total = matricula + mensalidade * 12;
        printf("\n----- Plano Adulto -----");
        printf("\n\nDependentes: %i",dependentes);
        printf("\nValor total: %.2f\n", total);
    }

    else if (idade >= 20 && dependentes > 0)
    {
        matricula = 300;
        mensalidade = 60;
        total = matricula + mensalidade * 12;
        printf("\n----- Plano Adulto -----");
        printf("\n\nDependentes: %i",dependentes);
        printf("\nValor total: %.2f\n", total);
    }
}

void main()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleTitle("Exercicio - Clube");

    entrada();
    fJovem();
    fAdulto();
}
