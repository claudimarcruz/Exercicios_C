#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL,"portuguese");

    float salario,financiamento;

    printf("Forneça o salário:");
    scanf("%f",&salario);
    printf("Valor do financiamento:");
    scanf("%f",&financiamento);

    {

    if (financiamento<=(salario*5))
        printf("Financiamento Concedido");
    else
        printf("Financiamento Negado");

    }

        return(0);

}
