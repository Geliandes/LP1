#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleTitle("Criptografia do Gelado");

    char texto1[9], texto2[9], texto3[9] ;

    printf( "Informe um texto de até 8 caracteres: " ) ;
    scanf( " %[^\n]", texto1 ) ;
    Cripto( texto1, texto2);
    Cripto( texto2, texto3);
    printf( "\nO texto criptografado é: \n%s\n\nDescriptografado é: \n%s\n", texto2, texto3 ) ;
    return 0 ;
}

void Cripto(char *texto1, char *texto2)
{
    char criptografia1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
    char controle[] =      {"0987654321abcdefghijklmnopqrstuvwxyz"};


    strcpy(texto2,texto1);

    for(int x = 0; x < strlen(texto1); x++)
    {
        for(int y = 0; y < strlen(criptografia1); y++)
        {
            if(strupr(texto1)[x] == criptografia1[y])
            {
                texto1[x] = controle[y];
            }

            else if(*(texto1+x) == *(controle+y))
            {
                *(texto2+x) = *(criptografia1+y);
            }
        }
    }
}
