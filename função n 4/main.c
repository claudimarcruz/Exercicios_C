#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



void funcao(float n, int *into, float *frac){

    *into=(int)n;
    *frac=n-*into;
}

int main()
{
    setlocale(LC_ALL,"portuguese");

    float numero,fracionada;
    int inteira;

    printf("Digite um número fracionado:");
    scanf("%f",&numero);

    funcao(numero,&inteira,&fracionada);

    printf("\n %d e \n %.2f",inteira,fracionada);


    return 0;


}


