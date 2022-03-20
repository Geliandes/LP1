#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

float N1,N2,N3,N4,N5;

float fMediaArit()
{
    float mediaArit;

    mediaArit = (N1+N2+N3+N4+N5)/5;
    printf("\nA média aritimética simples é: %f",mediaArit);
}

float fMediaPond()
{
    float mediaPond,P1,P2,P3,P4,P5;
    printf("\nDigite o valor dos pesos para calcular a média ponderada: \n");
    scanf("%f%f%f%f%f", &P1, &P2, &P3, &P4, &P5);
    mediaPond = (N1 * P1 + N2 * P2 + N3 * P3 + N4 * P4 + N5 * P5)/(P1+P2+P3+P4+P5);
    printf("\nA Média Ponderada é: %.2f", mediaPond);
}

float fDesvioPadrao()
{
    float desvioPadrao,media,X1,X2,X3,X4,X5;

    media = (N1+N2+N3+N4+N5)/5;

    desvioPadrao = sqrt (((N1 - media) * (N1 - media) + (N2 - media) * (N2 - media) +(N3 - media) * (N3 - media) +(N4 - media) * (N4 - media) +(N5 - media) * (N5 - media))/(5));
    printf("O Desvio Parão é: %.2f", desvioPadrao);
}

float fMaiorMenor()
{
    float maior, menor;

    //Descobrir qual é o maior valor
    if(N1 > N2 && N1 > N3 && N1 > N4 && N1 > N5)
        maior = N1;
    else if(N2 > N3 && N2 > N4 && N2 > N5)
        maior = N2;
    else if(N3 > N4 && N3 > N5)
        maior = N3;
    else if(N4 > N5)
        maior = N4;
    else
        maior = N5;

    //Descobrir qual é o menor valor
    if(N1 < N2 && N1 < N3 && N1 < N4 && N1 < N5)
        menor = N1;
    else if(N2 < N3 && N2 < N4 && N2 < N5)
        menor = N2;
    else if(N3 < N4 && N3 < N5)
        menor = N3;
    else if(N4 < N5)
        menor = N4;
    else
        menor = N5;

    printf("\nO maior número é: %.2f e o menor número é: %.2f", maior, menor);
}

float fDados()
{

    printf("\nDigite 5 valores abaixo: \n\n");
    scanf("%f%f%f%f%f", &N1, &N2, &N3, &N4, &N5);
    printf("\nValor 1: %.1f  Valor 2: %.1f  Valor 3: %.1f  Valor 4: %.1f  Valor 5: %.1f",N1,N2,N3,N4,N5);
}

int RetornarOpcao()
{
    int Retorno;

    printf("\n\n------------------------------------------------------------\n");
    printf("\n>>Estatística<<");
    printf("\n\n1 - Entrar com os dados (5 valores)");
    printf("\n2 – Calcular a média aritmética simples dos dados");
    printf("\n3 – Calcular a média ponderada dos dados (fornecer 5 pesos)");
    printf("\n4 – Calcular o desvio padrão dos dados");
    printf("\n5 – Achar o maior valor e menor valor");
    printf("\n6 - Sair do programa");
    printf("\n\nEntre com sua opção: ");
    scanf("%i", &Retorno);

    return Retorno;
}

int opcoesIniciais()
{
    int inicio;

    printf("\n>>Estatística<<");
    printf("\n\n1 - Entrar com os dados (5 valores)");
    printf("\n2 – Calcular a média aritmética simples dos dados");
    printf("\n3 – Calcular a média ponderada dos dados (fornecer 5 pesos)");
    printf("\n4 – Calcular o desvio padrão dos dados");
    printf("\n5 – Achar o maior valor e menor valor");
    printf("\n6 - Sair do programa");
    printf("\n\nEntre com sua opção: ");
    scanf("%i", &inicio);

    return inicio;
}

int main()
{

    setlocale(LC_ALL, "Portuguese");
    SetConsoleTitle(" Exercicio Funcao ");

    int Opcao;

    Opcao = opcoesIniciais();

    while(Opcao >= 0)
    {
        switch(Opcao)
        {
            case 1:
                fDados();
                break;

            case 2:
                fMediaArit();
                break;

            case 3:
                fMediaPond();
                break;

            case 4:
                fDesvioPadrao();
                break;

            case 5:
                fMaiorMenor();
                break;

            case 6:
                {
                printf("\nFIM!\n");
                return 0;
                break;
                }

            default:
                printf("\nOpção inválida");
                break;
        }
            Opcao = RetornarOpcao();
    }
}

