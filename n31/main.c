#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()

{
    setlocale(LC_ALL,"portuguese");

    int n1,n2,n3,n4;
    float soma=0,quantidade=0,media;

    printf("Informe o primeiro n�mero:");
    scanf("%d",&n1);

    printf("Informe o segundo n�mero:");
    scanf("%d",&n2);

    printf("Informe o terceiro n�mero:");
    scanf("%d",&n3);

    printf("Informe o quarto n�mero:");
    scanf("%d",&n4);

    if(n1 % 2 == 0) {
      soma = soma + n1;
      quantidade = quantidade + 1;
    }

    if(n2 % 2 == 0) {
      soma = soma + n2;
      quantidade = quantidade + 1;
    }

    if(n3 % 2 == 0) {
      soma = soma + n3;
      quantidade = quantidade + 1;
    }

    if(n4 % 2 == 0) {
      soma = soma + n4;
      quantidade = quantidade + 1;
    }

    media = soma / quantidade;

    if (quantidade == 0) {
      printf("Nenhum n�mero par encontrado!");
    } else {
      printf("\nA m�dia dos n�meros pares �: %.2f", media);
    }

    return 0;
}
