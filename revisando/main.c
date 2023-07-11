#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int aleatorio(int max){
    return rand()% max+1;
}
int main()
{
    setlocale(LC_ALL,"portuguese");

    srand(time(NULL));

    int n1,n2,soma;

    do{
    n1= aleatorio(100);
    printf("N1:%d\n",n1);

    n2= aleatorio(100);
    printf("N2:%d\n",n2);

    soma=n1+n2;

    printf("\nSoma:%d\n\n",soma);

    }while(soma<196);





     if(soma<=190){
        soma++;
    }
    printf("\nQuantidade de execuções:%d", soma);


    return 0;
}
