#include <stdio.h>
#include <stdlib.h>
/*
int fatorial(int n){
    if(n==1) {
        return 1;
    }else {
        return n * fatorial(n -1);
    }
}

int main()
{
    int resultado;

    resultado = fatorial(5);

    printf("%d", resultado);
    return 0;
}
*/

int quantDig(int n) {

    static int contador = 0;

    if(n != 0){
        contador++;
        quantDig(n/10);

    }return contador;
}

int main ()
{
    int quantidade;

    quantidade = quantDig(125);

    printf("%d", quantidade);

    return 0;
}


