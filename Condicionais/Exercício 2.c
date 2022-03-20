#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main()
{
    int publico;
    float popular, geral, arquibancada, cadeiras, vlr_total;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o total de pessoas: ");
    scanf("%i", &publico);

    popular = (publico * 0.1) * 5;
    geral = (publico * 0.5) * 10;
    arquibancada = (publico * 0.3) * 20;
    cadeiras = (publico * 0.1) * 30;

    vlr_total = popular + geral + arquibancada + cadeiras;
    printf("O valor total da renda é de R$ %f", vlr_total);
}
