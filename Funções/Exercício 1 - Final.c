#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void fDobro()
{
    int numero, dobro;

    printf("\nInforme um número: ");
    scanf("%i", &numero);
    dobro = numero * 2;
    printf("\nO dobro do numero %d é %d",numero, dobro);
}

float fCalcDesconto(float ValCompra)
{
    float desc;

    if(ValCompra >= 800)
        desc = ValCompra * 0.15;
    else
        desc = 0;
    return desc;
}

void fVenda()
{
    int Cod, QtVenda;

    float PrecUnitario, ValCompra, ValPagar;
    printf("\nInforme um código: ");
    scanf("%i", &Cod);

    printf("\nInforme a quantidade vendida: ");
    scanf("%i", &QtVenda);

    printf("\nInforme o preço unitário: ");
    scanf("%f", &PrecUnitario);

    ValCompra = PrecUnitario * QtVenda;
    ValPagar = ValCompra - fCalcDesconto(ValCompra);
    printf("\nValor de compra: %.2f \n\nDesconto: %.2f \n\nTotal a pagar: %.2f",ValCompra,fCalcDesconto(ValCompra),ValPagar);
}

float fcalcMedia(float prova1, float prova2)
{
    return (prova1+prova2)/2;
}

void fMedia()
{
    int Cod;

    float  prova1, prova2;
    printf("\nInforme um código: ");
    scanf("%i", &Cod);

    while (Cod > 0)
    {
        printf("\nInforme a nota 1: ");
        scanf("%f", &prova1);
        printf("\nInforme a nota 2: ");
        scanf("%f", &prova2);
        printf("\nMédia: %.2f", fcalcMedia(prova1, prova2));

        if(fcalcMedia(prova1, prova2) >= 5)
            printf("\nAprovado");
        else
            printf("\nReprovado");
        printf("\n\nInforme um código: ");
        scanf("%i", &Cod);
    }
}

void fTabuada(int num, int qtde)
{
    int cont, resultado;

    for(cont = 1; cont <= qtde; cont ++)
    {
        resultado = num * cont;
        printf("\n%d x %d = %d", num,cont,resultado);
    }
}

int OpcoesIniciais()
{
    int Inicio;

    printf("Opção 1 - Dobro");
    printf("\nOpção 2 - Valor da venda");
    printf("\nOpção 3 - Média");
    printf("\nOpção 4 - Tabuada");
    printf("\nOpção 5 - Fechar o programa");
    printf("\n\nInforme a opção: ");
    scanf("%i",&Inicio);

    return Inicio;
}

int RetornarOpcao()
{
    int Retorno;

    printf("\n\n------------------------------------------------------------");
    printf("\n\nOpção 1 - Dobro");
    printf("\nOpção 2 - Valor da venda");
    printf("\nOpção 3 - Média");
    printf("\nOpção 4 - Tabuada");
    printf("\nOpção 5 - Fechar o programa");
    printf("\n\nInforme a opção: ");
    scanf("%i",&Retorno);

    return Retorno;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Opcao, Retorno, num, qtde;

    Opcao = OpcoesIniciais();

    while (Opcao < 5)
    {
        switch (Opcao)
        {
            case 1:
                fDobro();
                break;

            case 2:
                fVenda();
                break;

            case 3:
                fMedia();
                break;

            case 4:
                printf("\nInforme um número: ");
                scanf("%d", &num);
                printf("Informe a quantidade de elementos: ");
                scanf("%d", &qtde);
                fTabuada(num,qtde);
                break;

            default:
                printf("Opção inválida");
                break;
        }

        Opcao = RetornarOpcao();

    }
}
