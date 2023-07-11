#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    int som(int n){
    int i;
    int soma=0;
    for(i=n; i>=1; i--){
        soma+=i;

    }
    return soma;
    }

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num;

    printf("Digite um número:");
    scanf("%d",&num);


    printf("Soma:%d",som(num));


    return 0;
}


