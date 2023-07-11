#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* alocMemoria(int quantidade) {

    int *vetor;

    vetor = (int*)malloc(quantidade * sizeof(int));

}

int main(){

    setlocale(LC_ALL, "portuguese");

    int *v, i, tamVetor, soma = 0;
    float media;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamVetor);

    v = alocMemoria(tamVetor);

    for (i = 0 ; i < tamVetor ; i++) {
        printf("Informe o %dº do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (i = 0 ; i < tamVetor ; i++) {
        soma = soma + v[i];
    }

    printf("\nSoma: %d", soma);

    media = (float)soma/tamVetor;

    printf("\nMédia: %.2f", media);

    free(v);

    return 0;



}


