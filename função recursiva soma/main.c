#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int n) {
    if(n == 1){
        return 1;
    }else{
        return n + soma(n - 1);
    }
}

int main()
{
    int n1, resultado;

    setlocale(LC_ALL, "portuguese");

    printf("Digite um número: ");
    scanf("%d", &n1);

    resultado = soma(n1);
    printf("\nSoma: %d", resultado);


    return 0;
}
