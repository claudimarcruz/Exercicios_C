#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int primo(int n) {

    int i, divisores = 0;

    for(i = 1 ; i <= n ; i++) {
        if((n % i) == 0){
            divisores++;
        }
    }

    if(divisores == 2 ){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n1, n2, i, contador = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);


    for(i = n1 ; i <= n2 ; i++) {
        if( primo(i) == 1) {
            contador++;
            printf("%d ", i);

        }
    }

   printf("\nQuantidade de n primos: %d", contador );

    return 0;
}
