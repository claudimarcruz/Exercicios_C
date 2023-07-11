#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
        setlocale(LC_ALL,"portuguese");

        int A,B;

        printf("Informe o valor de A:");
        scanf("%d",&A);
        printf("Informe o valor de B:");
        scanf("%d",&B);

        if (A%B == 0)
        {
            printf("A é múltiplo de B");
        }
            else if (B%A == 0)
        {
            printf("A é divisor de B");
        }
            else
        {
            printf("A não é nada de B");
        }

        return(0);



}
