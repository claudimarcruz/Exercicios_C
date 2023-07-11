#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL,"portuguese");

    int numero;

    printf("Forneça um número:");
    scanf("%d",&numero);

    {
        if ((numero % 2)==0)
            printf("Número par");
        else
            printf("Número ímpar");

    }

    {
        if (numero>=0)
            printf("Número positivo");
        else
            printf("Número negativo");


    }

        return(0);

}


