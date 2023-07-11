#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");


    int i, j, numeros[5];

    for (i = 0; i<5; i++)

    {


    printf("Digite o %dº numero:",i+1);
    scanf("%d", &numeros[i]);


    }
    for (j = 4; j >= 0; j--)
    {
        printf("\n [%d] \n", numeros[j]);
    }
    return 0;
}


