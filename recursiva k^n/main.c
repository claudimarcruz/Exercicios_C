#include <stdio.h>
#include <stdlib.h>

int poten(int k, int n){
    if(n == 0){
        return 1;
    }else{
        return k * poten(k, n - 1);
    }

}

int main()
{
    int k = 4, n = 1, resultado;

    resultado = poten(k,n);

    printf("\n%d", resultado);

    return 0;
}
