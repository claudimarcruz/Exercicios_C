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


int main()
{
    FILE *arquivo, *arquivo_ordenado;
    int tamanho = 100;
    int v[tamanho], v_ordenado[tamanho], v_teste[tamanho], i;
    srand(time(NULL));

    arquivo = fopen("numeros_aleatorios.dat", "w+b");

    if(arquivo==NULL){
        printf("O arquivo não pode ser criado");
        return 1;
    }

    for(i=0 ; i < tamanho ; i++){
        v[i] = rand()%1000;
    }

    fwrite(&v, sizeof(int), tamanho, arquivo);

    fclose(arquivo);

    arquivo = fopen("numeros_aleatorios.dat", "r+b");

    if(arquivo==NULL){
        printf("O arquivo não pode ser criado");
        return 1;
    }

    fread(&v_ordenado, sizeof(int), tamanho, arquivo);

    selectionSort(v_ordenado,tamanho);

    arquivo_ordenado = fopen("numeros_odenados.dat", "w + b");

     if(arquivo_ordenado==NULL){
        printf("O arquivo não pode ser criado");
        return 1;
    }

    fwrite(&v_ordenado, sizeof(int), tamanho, arquivo_ordenado);

    fclose(arquivo_ordenado);

    arquivo_ordenado = fopen("numeros_odenados.dat", "r + b");

     if(arquivo_ordenado==NULL){
        printf("O arquivo não pode ser criado");
        return 1;
    }

    fread(&v_teste, sizeof(int), tamanho, arquivo_ordenado);

    for(i=0; i<tamanho; i++){
        printf("[%d] ", v_teste[i]);
    }

    return 0;
}
