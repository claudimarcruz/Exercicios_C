#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int aleatorio(int max){
    return rand()%max +1;
}

int main()
{
    setlocale(LC_ALL,"portuguese");

    srand(time(NULL));

    int *vetor, i;

    vetor= (int *) malloc(10 * sizeof(int));

    if(vetor==NULL){
        printf("Não tem memória disponível");
    }else{
        for(i=0;i<10;i++){
            vetor[i]= aleatorio(100);
        }
         for(i=0;i<10;i++){
        printf("[%d]",vetor[i]);

    }

    printf("\n\n");

    vetor= (int *) realloc(vetor, 20 * sizeof(int));

    if(vetor==NULL){
        printf("Não foi possível realocar memória.");
    }else{
        for(i=10;i<20;i++){
            vetor[i]= aleatorio(100);
        }
    for(i=0;i<20;i++){
        printf("[%d]",vetor[i]);
    }

    printf("\n\n");
    vetor= (int *) realloc(vetor, 25 * sizeof(int));

    if(vetor==NULL){
        printf("Não foi possível realocar memória.");
    }else{
        for(i=20;i<25;i++){
            vetor[i]= aleatorio(100);
        }
     for(i=0;i<25;i++){
        printf("[%d]",vetor[i]);
    }


    }}

    free(vetor);

    }



    return 0;
}
