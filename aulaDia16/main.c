#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,ferias;

    printf("Forne�a o Sal�rio:");
    scanf("%f",&salario);

    ferias=salario+(salario*0.33);

    printf("F�rias:%.2f",ferias);

    return(0);

}






