#include <stdio.h>
#include <stdlib.h>

int particao(int v[], int esq, int dir){
	int pivo, i, j, aux;

	pivo = v[esq];
	i = esq;
	j = dir;

	while(i<j){

        while((v[i] <= pivo) && (i<=dir)){
            i++;
        }

        while(v[j] > pivo){
            j--;
        }
        if(i<j){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
	}
	v[esq] = v[j];
	v[j] = pivo;
	return j;

}

void QuickSort(int v[], int esq, int dir) {

	int pivo;

	if (dir > esq){
        pivo = particao(v, esq, dir);
        QuickSort(v,esq,pivo-1); //metade esquerda
        QuickSort(v,pivo+1,dir); //metade direita
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

    QuickSort(v, 0, tamanho-1);


    printf("\n\nVetor Ordenado: \n");
    imprime(v, tamanho);

    return 0;
}
