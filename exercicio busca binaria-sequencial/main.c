#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pesquisaBinaria (int v[], int n, int x){
    int e, m, d;
    e = 0;
    d = n - 1;
    while(e <= d){
        m = (e + d) / 2;
        if(v[m] == x){
            return m;
        }else if(v[m] < x){
            e = m + 1;
        }else if(v[m] > x){
            d = m - 1;
        }
    }
    return -1;
}

int pesquisaSequencial(int v[], int n, int x){
    int i;

    for(i=0; i<n; i++){
        if(v[i]==x){
            return 1;
        }
    }
    return -1;
}

void shellSort(int *v, int n) {
    int i , j , valor;
    int h = 1;
    while(h < n) {
        h = 3*h+1;
    }
    while (h > 1) {
        h /= 3;
        for(i=h; i<n; i++) {
            valor = v[i];
            j = i;
            while (j >= h && valor < v[j-h]) {
                v[j] = v[j - h];
                j = j - h;
            }
            v[j] = valor;
        }
    }
}

void imprimir(int v[], int n){
    int i;

    for(i=0; i<n; i++){
        printf("[%d] ", v[i]);
    }
    printf("\n");
}


int main(){

    srand(time(NULL));

    FILE *f_aleatorios, *f_numeros;

    int tamanho=20, tamanho_numeros=5, max_aleatorios=100, aleatorios[tamanho], numeros[tamanho_numeros], i, resultado;

    //cria os arquivos
    f_aleatorios = fopen("aleatorios.dat", "w+b");
    f_numeros = fopen("numeros.dat", "w+b");

    //verifica se os arquivos foram criados corretamente
    if((f_aleatorios==NULL) || (f_numeros==NULL)){
        printf("ERRO: Um dos arquivos não foi criado corretamente");
        return 1;
    }

    //gera os números aleatórios e guarda no vetor aleatorios[]
    for(i=0; i<tamanho; i++){
        aleatorios[i] = rand() % max_aleatorios;
    }

    //salva o vetor aleatorios[] dentro do arquivo aleatorios.dat
    fwrite(aleatorios, sizeof(int), tamanho, f_aleatorios);
    fclose(f_aleatorios);

    //gera os números que serão pesquisados e armazena no vetor numeros[]
    for(i=0; i<tamanho_numeros; i++){
        numeros[i] = rand() % max_aleatorios;
    }

    //salva o vetor numeros[] dentro do arquivo numeros.dat
    fwrite(numeros, sizeof(int), tamanho_numeros, f_numeros);
    fclose(f_numeros);

    //abrir os arquivos
    f_aleatorios = fopen("aleatorios.dat", "r+b");
    f_numeros = fopen("numeros.dat", "r+b");

    //verifica se os arquivos foram lidos corretamente
    if((f_aleatorios==NULL) || (f_numeros==NULL)){
        printf("ERRO: Um dos arquivos não foi lido corretamente");
        return 1;
    }

    //recupera os números aleatórios no arquivo aleatorios.dat
    fread(aleatorios, sizeof(int), tamanho, f_aleatorios);

    //recupera os números a serem pesquisados no arquivo numeros.dat
    fread(numeros, sizeof(int), tamanho_numeros, f_numeros);

    //ordena os dados do vetor aleatorios[] para realizar a busca binária
    shellSort(aleatorios, tamanho);

    imprimir(aleatorios, tamanho);
    imprimir(numeros, tamanho_numeros);
/*
    for(i=0; i<tamanho_numeros; i++){
        resultado = pesquisaBinaria(aleatorios, tamanho, numeros[i]);
        if(resultado == -1){
            printf("\nResultado para %d: NAO ENCONTRADO", numeros[i]);
        }else{
            printf("\nResultado para %d: ENCONTRADO / Posicao: %d", numeros[i], resultado);
        }
    }
*/
    printf("\n**********************************\n");

     for(i=0; i<tamanho_numeros; i++){
        resultado = pesquisaSequencial(aleatorios, tamanho, numeros[i]);
        if(resultado == -1){
            printf("\nResultado para %d: NAO ENCONTRADO", numeros[i]);
        }else{
            printf("\nResultado para %d: ENCONTRADO / Posicao: %d", numeros[i], resultado);
        }
    }









    return 0;
}
