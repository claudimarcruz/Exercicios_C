#include <stdio.h>
#include <stdlib.h>

int main()
{
    // nesse programa vemos o uso do continue.
    // o objetivo do programa é somar todos os números que não sejam múltiplos de 5.
    // o continue verifica o for e tira os números 5 e 10 e soma o restante, a soma dá 40.
    // por curiosidade se colocarmos um break, a soma vai ser 10, ele interrompe quando chega no número 5.

  int i,soma=0;


  for(i=1 ; i<=10; i++){
            if( i%5 ==0)
                continue;

            soma = soma + i ;
        }


        printf("Soma: %d", soma);

        return 0;

}

