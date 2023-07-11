#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, qtdFunc=10, qtdFunc_maisDoisMil=0 ,qtdFunc_menosDoisMil=0;
    float reajuste, salario;
    char nome;
    for (i=0; i<=qtdFunc; i++){

        printf("Informe o nome do funcionário:");
        scanf("%s",&nome);
        printf("Informe o salário do funcionário:");
        scanf("%f",&salario);

        if (salario>2000.00){

            qtdFunc_maisDoisMil++,
            printf("O número de funcionários que recebem mais de 2000.00 é: %d ");


        }




    }
        return(0);

}
