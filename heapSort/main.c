#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Programa para refazer/reconstruir a condição de heap
void  refazHeap(int esq, int dir, int v[]){
    int i = esq;
    int j, aux;
    j = (i+1) * 2 - 1;
    aux = v[i];
    while (j <= dir){
        if (j < dir){
            if (v[j] < v[j+1])
            j++;
        }
        if (aux >= v[j])
            break;
        v[i] = v[j];
        i = j;
        j = i * 2 + 1 ;
    }
    v[i] = aux;
}

// Programa para construir o heap:
void constroiHeap(int v[], int n){
    int esq;
    esq = n / 2;
    while (esq > 0){
        esq--;
        refazHeap(esq, n, v);
    }
}

//função que implementa o Heapsort
void heapSort(int v[], int n){
    int esq, dir;
    int x;
    constroiHeap(v, n-1); //constroi o heap
    esq = 0;
    dir = n - 1;
    while (dir > 0){ // ordena o vetor
        x = v[0];
        v[0] = v[dir];
        v[dir] = x;
        dir--;
        refazHeap(esq, dir, v);
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
    int v[tamanho];
    int i;

    for(i=0; i<tamanho; i++){
        v[i] = rand()%500;
    }

/*
    v[0] = 7;
    v[1] = 2;
    v[2] = 13;
    v[3] = 8;
    v[4] = 1;
    v[5] = 10;
    v[6] = 25;

*/
    printf("Vetor Desordenado:\n");
    imprime(v, tamanho);

    heapSort(v, tamanho);

    printf("\n\nVetor Ordenado: \n");

    imprime(v, tamanho);

    return 0;
}

