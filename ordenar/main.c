#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tamanho = 10;
    int vetor[tamanho];
    int i;
    int menor = 500001;
    int posicao;
    int soma = 0;

    srand(time(NULL));


     for (i = 0; i < tamanho; i++){
        vetor[i] = rand()%5;
    }


    printf("\nVetor original\n");
    for (i = 0; i < tamanho; i++){
        printf("[%d] ", vetor[i]);
    }


    do{
        for (i = 0 + soma; i < tamanho; i++){
            if(vetor[i] < menor ){
                menor = vetor[i];
                posicao = i;
        }
    }

    vetor[posicao] = vetor[0 + soma];
    vetor[0 + soma] = menor;


    menor = 500001;
    //if (menor = 500){
        soma++;
    //}

    }while(soma < tamanho);


    printf("\nVetor ordenado\n");
    for (i = 0; i < tamanho; i++){
        printf("[%d] ", vetor[i]);
    }

     printf("\nVetor inverso\n");
    for (i = tamanho - 1; i >= 0; i--){
        printf("[%d] ", vetor[i]);
    }







    return 0;
}
