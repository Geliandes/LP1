#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vet[5], i, soma;

    for(i=0;i<5;i++){
        printf("Informe o %dº número: ", i+1);
        scanf("%d",&vet[i]);
    }

    for (i=0;i<5; i++){
    printf("\nO %dº número é: %d", i+1,vet[i]);
    soma = soma + vet[i];
    }

    printf("\n");
    /*for(i=4;i>=0;i--){
        printf("\n%d ", vet[i]);
    }*/
}
