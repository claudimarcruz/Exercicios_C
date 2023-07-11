#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial(int n){
    int i,fat=1;

    for(i=n;i>=1;i--){

        fat*=i;

    }
    return fat;

}

int main()
{
    setlocale(LC_ALL,"portuguese");

    int n;

    printf("Digite um número:");
    scanf("%d",&n);

    printf("Fatorial:%d",fatorial(n));

    return 0;
}
