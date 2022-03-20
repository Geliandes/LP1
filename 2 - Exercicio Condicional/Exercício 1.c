#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){

    int idade = 0, num_depend = 0;
    float vlr_total = 0, mensalidade = 0, inscricao = 0;
    char nome_plano;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite a idade: ");
    scanf("%i", &idade);

if(idade < 16){
        printf("\nVoc� n�o tem idade suficiente para contratar um plano\n");
        return 0;
    }

    printf("Digite o n� de dependentes: ");
    scanf("%i", &num_depend);

    if(idade >= 16 && idade < 20){
        inscricao = 200;
        mensalidade = 30;
            if(num_depend > 0){
                mensalidade = mensalidade + 10 * num_depend;
            }
        //nome_plano = "Jovem";
        printf("O plano �: Jovem");
    }

    if(idade >= 20){
        inscricao = 300;
        mensalidade = 60;
            if(num_depend == 0){
                mensalidade = mensalidade * 0.9;
            }
        //nome_plano = "Adulto";
        printf("O plano �: Adulto");
    }

    vlr_total = inscricao + 12 * mensalidade;

    printf("\nO valor total do plano � de R$ %f\n", vlr_total);
    //printf("\nO plano �: %c\n", nome_plano);
}
