#include <stdio.h>
#include <stdlib.h>

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

int pesquisaBinariaR(int v[], int e, int d, int x){
    int m;
    if (e > d)
        return -1;
    else{
        m = (e + d) / 2;
        if (v[m] == x)
            return m;
        else if (x < v[m])
            return pesquisaBinariaR(v, e, m-1, x);
        else
            return pesquisaBinariaR(v, m+1, d, x);
        }
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

    int tamanho=10, v[tamanho], i, resultado;

    for(i=0; i<tamanho; i++){
        v[i] = rand()%20;
        //v[i] = i;
    }

    imprimir(v, tamanho);

    shellSort(v, tamanho);

    imprimir(v, tamanho);

    for(i=0; i<tamanho; i++){
        resultado = pesquisaBinariaR(v, 0, tamanho, i);
        if(resultado == -1){
            printf("Resultado para o numero %d: NAO ESTA PRESENTE\n", i);
        }else{
            printf("Resultado para o numero %d: ESTA NA POSICAO %d\n", i, resultado);
        }
    }



    return 0;
}
