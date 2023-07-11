#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
// Versão 1
void bubbleSort(int v[], int n){
    int i, j, x;
    for (i=0; i<n-1; i++){
		for (j=0; j<n-1; j++){
            if (v[j] > v[j+1]){
                x = v[j];
                v[j] = v[j+1];
                v[j+1] = x;
		    }
        }
	}
}
*/

/*

// Versão 2 - Desconsidera elementos à direita já ordenados
void bubbleSort(int v[], int n){
    int i, j, x;
    for (i=0; i<n-1-i; i++){
		for (j=0; j<n-1; j++){
            if (v[j] > v[j+1]){
                x = v[j];
                v[j] = v[j+1];
                v[j+1] = x;
		    }
        }
	}
}
*/

// Versão 3 - Se não houver troca, encerra o algoritmo pois já estará ordenado
void bubbleSort(int v[], int n){
    int i, j, x, contTrocas;
    for (i=0; i<n-1; i++){
        contTrocas = 0;
		for (j=0; j<n-1; j++){
            if (v[j] > v[j+1]){
                x = v[j];
                v[j] = v[j+1];
                v[j+1] = x;
                contTrocas++;
		    }
        }
        if(contTrocas == 0){
            break;
        }
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
    int tamanho = 50;
    int v[tamanho],i;

    for(i=0; i<tamanho; i++){
        v[i] = rand()%20;
    }

    printf("Vetor Desordenado:\n");
    imprime(v, tamanho);

    bubbleSort(v, tamanho);

    printf("\n\nVetor Ordenado: \n");

    imprime(v, tamanho);

    return 0;
}
