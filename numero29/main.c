#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL,"portuguese");

    int numero;

    printf("Forne�a um n�mero:");
    scanf("%d",&numero);

    {
        if ((numero % 2)==0)
            printf("N�mero par");
        else
            printf("N�mero �mpar");

    }

    {
        if (numero>=0)
            printf("N�mero positivo");
        else
            printf("N�mero negativo");


    }

        return(0);

}


