#include <stdio.h>
#include <stdlib.h>

void merge(int vetor[], int comeco, int meio, int fim) {
    int com1 = comeco, com2 = meio+1, comAux = 0, tam = fim-comeco+1;
    int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));

    while(com1 <= meio && com2 <= fim){
        if(vetor[com1] < vetor[com2]) {
            vetAux[comAux] = vetor[com1];
            com1++;
        } else {
            vetAux[comAux] = vetor[com2];
            com2++;
        }
        comAux++;
    }

    while(com1 <= meio){  //Caso ainda haja elementos na primeira metade
        vetAux[comAux] = vetor[com1];
        comAux++;
        com1++;
    }

    while(com2 <= fim) {   //Caso ainda haja elementos na segunda metade
        vetAux[comAux] = vetor[com2];
        comAux++;
        com2++;
    }

    for(comAux = comeco; comAux <= fim; comAux++){    //Move os elementos de volta para o vetor original
        vetor[comAux] = vetAux[comAux-comeco];
    }

    free(vetAux);
}

void MergeSort(int vetor[], int comeco, int fim){
    if (comeco < fim) {
        int meio = (fim+comeco)/2;

        MergeSort(vetor, comeco, meio);
        MergeSort(vetor, meio+1, fim);
        merge(vetor, comeco, meio, fim);
    }
}


void imprime(int v[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("[%d] ", v[i]);
    }
}


void main(){

	srand(time(NULL));
    int tamanho = 10;
    int v[tamanho],i;

    for(i=0; i<tamanho; i++){
        v[i] = rand()%500;
    }


    printf("Vetor Desordenado:\n");
    imprime(v, tamanho);

    MergeSort(v, 0, tamanho-1);


    printf("\n\nVetor Ordenado: \n");
    imprime(v, tamanho);

    return 0;
}
