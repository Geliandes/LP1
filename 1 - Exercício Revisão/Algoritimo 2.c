#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int cod_func, temp_servico, area;
    float sal_base, bonus, gratificacao, total;

    cod_func = 1;
    total = 0;

    while(cod_func > 0){

        printf("Digite o código do funcionário: ");
        scanf("%d", &cod_func);

        printf("Digite o tempo de serviço: ");
        scanf("%d", &temp_servico);

        printf("Digite o valor do salário base: ");
        scanf("%f", &sal_base);

        area = cod_func / 100;

        printf("O código do funcionário é: %d\n\n",area);

        if (area == 1){
            if(temp_servico <= 5){
                bonus = 0.025;
            }

            else{
                bonus = 0.045;
            }
        }

        if (area == 2){
            if(temp_servico <= 5){
                bonus = 0.035;
            }

            else{
                bonus = 0.055;
            }
        }

        if (area == 3){
            if(temp_servico <= 5){
                bonus = 0.04;
            }

            else{
                bonus = 0.065;
            }
        }

        gratificacao = sal_base * bonus;
        printf("O valor da gratificação deste funcionário é: %f\n\n", gratificacao);
        total = total + gratificacao;
        printf("Total de gratificação paga: %f\n\n", total);
    }

    return 0;
}






