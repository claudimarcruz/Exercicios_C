#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, qtdFunc=10, qtdFunc_maisDoisMil=0 ,qtdFunc_menosDoisMil=0;
    float reajuste, salario;
    char nome;
    for (i=0; i<=qtdFunc; i++){

        printf("Informe o nome do funcion�rio:");
        scanf("%s",&nome);
        printf("Informe o sal�rio do funcion�rio:");
        scanf("%f",&salario);

        if (salario>2000.00){

            qtdFunc_maisDoisMil++,
            printf("O n�mero de funcion�rios que recebem mais de 2000.00 �: %d ");


        }




    }
        return(0);

}
