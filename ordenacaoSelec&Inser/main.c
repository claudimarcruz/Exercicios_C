#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int a[], int n) {
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



/*
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
*/
void imprime(int v[], int n) {
    int i;
    for(i=0; i<n; i++){
        printf("[%d] ", v[i]);
    }
}


int main()
{


    int tamanho = 11;
    int v[11] = {4, 3, 9, 2, 5, 8, 2, 7, 4, 6, 1};

    printf("Vetor desordenado:\n");


    imprime(v,tamanho);

    selectionSort(v, tamanho);


    printf("\n\n Vetor ordenado: \n");

    imprime(v, tamanho);



    return 0;
}
