#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,ferias;

    printf("Forneça o Salário:");
    scanf("%f",&salario);

    ferias=salario+(salario*0.33);

    printf("Férias:%.2f",ferias);

    return(0);

}






