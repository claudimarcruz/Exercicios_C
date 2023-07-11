#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero,i;

    printf(" \t ==Tabuada== \n ");
    printf("Digite um número de 1 a 10:");
    scanf("%d", &numero );



    printf(" \n***Tabuada de %d***\n", numero);

    for (i=1; i<=10; i++){


        printf("%d x %d = %d \n",numero,i, numero*i);

     }

    return 0;
}
