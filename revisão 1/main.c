#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int numero,resposta=0;

    printf("Digite um n�mero:");
    scanf("%d",&numero);

    for ( ; numero>=1; numero--){
        resposta*=numero;

    }

    printf("O fatorial �: %d",resposta);

    return 0;
}
