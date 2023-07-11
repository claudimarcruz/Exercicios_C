#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int posNeg(int n){
    if (n>0){
        printf("Número Positivo");
    }
    else{
        printf("Número negativo");
    }
    }



int main()
{
    setlocale(LC_ALL,"portuguese");

    int n;

    printf("Informe um número:");
    scanf("%d",&n);

    int posNeg(int n);

    posNeg(n);


    return 0;
}
