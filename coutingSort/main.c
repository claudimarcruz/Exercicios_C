#include <stdio.h>
#include <stdlib.h>


void countingSort(int v[], int n) {

    int i, ordenado[n];

    // encontra o maior elemento do vetor
    int maior = v[0];
    for (i = 1; i < n; i++) {
        if (v[i] > maior)
            maior = v[i];
    }

    // cria o vetor que faz a soma das ocorrências de cada número
    int contagem[maior];

    // inicializa o vetor com zeros
    for (i = 0; i <= maior; ++i) {
        contagem[i] = 0;
    }

    // guarda a contagem de cada elemento
    for (i = 0; i < n; i++) {
        contagem[v[i]]++;
    }

    // guarda a contagem cumulativa
    for (i = 1; i <= maior; i++) {
        contagem[i] += contagem[i - 1];
    }

    // ordena os dados de acordo com os índices presentes no vetor
    for (i = n - 1; i >= 0; i--) {
        ordenado[contagem[v[i]] - 1] = v[i];
        contagem[v[i]]--;
    }

    // copia os dados do vetor ordenado para o vetor original passado como parâmetro
    for (i = 0; i < n; i++) {
        v[i] = ordenado[i];
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
    int v[tamanho], i;

    for(i=0; i<tamanho; i++){
        v[i] = rand()%50;
    }


    printf("Vetor Desordenado:\n");
    imprime(v, tamanho);

    countingSort(v, tamanho);

    printf("\n\nVetor Ordenado: \n");
    imprime(v, tamanho);

    return 0;
}
