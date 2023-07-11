#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int v[], int n){
    int i, j, valorAtual;

    for(i=1; i<n; i++){
        valorAtual = v[i];
        j = i - 1;
        while((j >= 0) && (valorAtual < v[j])){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = valorAtual;
    }
}

void imprime(int v[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("[%d] ", v[i]);
    }
}

int main(){

    srand(time(NULL));
    int tamanho = 100;
    int v[tamanho],i;

    for(i=0; i<tamanho; i++){
        v[i] = rand()%500;
    }

    printf("Vetor Desordenado:\n");
    imprime(v, tamanho);

    insertionSort(v, tamanho);

    printf("\n\nVetor Ordenado: \n");

    imprime(v, tamanho);

    return 0;
}
