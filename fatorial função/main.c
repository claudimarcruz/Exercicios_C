#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    int fat(int n){
    int i;
    int fatorial=1;
    for(i=n; i>=1; i--){
        fatorial*=i;

    }
    return fatorial;
    }

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num;

    printf("Digite um número:");
    scanf("%d",&num);


    printf("Fatorial:%d",fat(num));


    return 0;
}
