#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int posNeg(int n){
    if (n>0){
        printf("N�mero Positivo");
    }
    else{
        printf("N�mero negativo");
    }
    }



int main()
{
    setlocale(LC_ALL,"portuguese");

    int n;

    printf("Informe um n�mero:");
    scanf("%d",&n);

    int posNeg(int n);

    posNeg(n);


    return 0;
}
