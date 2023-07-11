#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprime(int v[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("[%d] ", v[i]);
    }
}

void particao(int esq, int dir, int *i, int *j, int v[]){
    int x, w;
    *i = esq;
    *j = dir;
    x = v[(*i + *j)/2]; // obtem o pivo x

    do{
        while (x > v[*i])
            (*i)++;
        while (x < v[*j])
            (*j)--;
        if (*i <= *j){
            w = v[*i];
            v[*i] = v[*j];
            v[*j] = w;
            (*i)++;
            (*j)--;
        }
    }while (*i <= *j);
}

void QuickSort(int esq, int dir, int v[]){
    int i,j;
    particao(esq, dir, &i, &j, v);
    if (esq < j) {
        QuickSort(esq, j, v);
    }
    if (i < dir){
        QuickSort(i, dir, v);
        //imprime(v, 7);
        //printf("\n\n");

    }

}



int main()
{
    srand(time(NULL));
    int tamanho = 1000;
    //int v[tamanho];
    int i;

    int *v;
    v = malloc(sizeof(int)*tamanho);

    for(i=0; i<tamanho; i++){
        v[i] = rand()%500;
    }

    //int v[7] = {3, 6, 4, 5, 1, 7, 2};

    printf("Vetor Desordenado: \n");
    //imprime(v, tamanho);
    //printf("\n\n\n\n");

    QuickSort(0, tamanho-1, v);

    printf("\n\nVetor Ordenado: \n");

    //imprime(v, tamanho);

    return 0;
}
