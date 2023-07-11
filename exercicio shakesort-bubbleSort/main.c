#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void shakeSort(int v[], int n){
    int i, j, x, contTrocas, sentido=1;
    for (i=0; i<n-1; i++){
        contTrocas = 0;
        if(sentido==1){
            for (j=0; j<n-1; j++){
                if (v[j] > v[j+1]){
                    x = v[j];
                    v[j] = v[j+1];
                    v[j+1] = x;
                    contTrocas++;
		    }
        }
        sentido= -1;
        }else {
           for (j=n-1; j >=0; j--){
                if (v[j] < v[j-1]){
                    x = v[j];
                    v[j] = v[j-1];
                    v[j-1] = x;
                    contTrocas++;
		    }
        }

        sentido = 1;
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
    int tamanho = 20;
    int v[tamanho],i;

    for(i=0; i<tamanho; i++){
        v[i] = rand()%50;
    }

    printf("Vetor Desordenado:\n");
    imprime(v, tamanho);

    bubbleSort(v, tamanho);

    //shakeSort(v, tamanho);

    printf("\n\nVetor Ordenado: \n");

    imprime(v, tamanho);

    return 0;
}
