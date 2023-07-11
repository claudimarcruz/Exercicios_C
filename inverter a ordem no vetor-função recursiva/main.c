#include <stdio.h>
#include <stdlib.h>

    int aleatorio(int max){
        return rand()%max+1;
        }


int main()
{
    int vetor[10],i,aux;

    srand(time(NULL));

    for(i=0;i<10;i++){
        vetor[i]=aleatorio(100);
        printf("[%d] ",vetor[i]);
    }
    for(i=0;i<5;i++){
        aux=vetor[i];
        vetor[i]=vetor[10-i];
        vetor[10-i]=aux;
}
    printf("\n\n");
    printf("Vetor invertido:\n");
    for(i=0;i<10;i++)
        printf("[%d] ",vetor[i+1]);

return 0;
}

