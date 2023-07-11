#include <stdio.h>
#include <stdlib.h>

int aleatorio(int max){
    return rand()%max +1;
    }
int main()
{
    srand(time(NULL));

    int vetor[5],i,maior=0,menor=100;

    for(i=0;i<5;i++){
        vetor[i]=aleatorio(100);
        printf("[%d] ",vetor[i]);

    }

    for(i=0;i<5;i++){
        if (vetor[i]>maior){
            maior=vetor[i];
        }

        if (vetor[i]<menor){
            menor=vetor[i];
        }
    }
        printf("\nMaior:%d\n",maior);
        printf("Menor:%d",menor);


    return 0;
}
