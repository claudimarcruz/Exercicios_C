#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int aleatorio(int max){
    return rand()%max+1;
    }

int menor_elemento(int vetor[20], int i, int menor) {

  if(i < 0) {
    return menor;
  }
    if(vetor[i] < menor) {
    menor = vetor[i];
  }

  return menor_elemento(vetor, i-1, menor);
}

int main()
{
     srand(time(NULL));

     setlocale(LC_ALL,"portuguese");


    int vetor[20],i;

    for(i=0;i<20;i++){
        vetor[i]=aleatorio(1000);
        printf("[%d] ",vetor[i]);
  }

    printf("\nO menor elemento do vetor é:%d\n",menor_elemento(vetor, 19, vetor[19]));

    return 0;
}
