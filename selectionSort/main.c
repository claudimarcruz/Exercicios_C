#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int a [], int n) {
    int i, j, min, aux;
    for(i= 0 ; i < n - 1 ; i++) {
        min = i;
        for(j=i+1 ; j < n ; j++){
            if(a[j] < a[min]) {
                min = j;
            }
        }

        aux = a[min];
        a[min] = a[i];
        a[i] = aux;
    }
}

void imprime(int v[], int n) {
    int i;
    for(i=0; i<n; i++){
        printf("[%d] ", v[i]);
    }
}
int main()
{

    srand(time(NULL));
    int tamanho = 10;
    int v[tamanho], i;

    for(i = 0 ; i < tamanho; i++) {
        v[i] = rand()%500;
    }

    printf("Vetor desordenado:\n");

    imprime(v,tamanho);

    selectionSort(v, tamanho);

    printf("\n\n Vetor ordenado: \n");

    imprime(v, tamanho);

    return 0;
}
