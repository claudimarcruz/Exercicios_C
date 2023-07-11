#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int numero;
    float total_numeros, soma;

    soma=0;
    total_numeros=0;


    do{
        printf("Insira um número:");
        scanf("%d",&numero);

        soma=soma+numero;
        total_numeros++;

    }
     while (numero>0);

     total_numeros--;

     printf("O total de números informados é: %f",total_numeros);
     printf("A média dos números informados é: %f",soma/total_numeros);

    return(0);

    }







