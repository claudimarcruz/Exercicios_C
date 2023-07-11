
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()

{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    int matriz[15][15], i, j, maior = 0, menor, linhaMaior, colunaMinimax;

    for(i = 0; i < 15 ; i++) {
        for(j = 0 ; j < 15 ; j++) {
                matriz[i][j] = rand()%1000;
        }
    }

    for(i = 0; i < 15 ; i++) {
        for(j = 0 ; j < 15 ; j++) {
                printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }

     for(i = 0; i < 15 ; i++) {
        for(j = 0 ; j < 15 ; j++) {
                if(matriz[i][j] > maior) {
                    maior = matriz[i][j];
                    linhaMaior = i;
                }
        }

    }

        menor = matriz[linhaMaior][j];
        for(j = 0 ; j < 15 ; j++) {
            if(matriz[linhaMaior][j] < menor) {
                menor = matriz[linhaMaior][j];
                colunaMinimax = j;
            }
        }

    printf("\nO maior número da matriz é %d e está na linha %d.", maior, linhaMaior + 1);
    printf("\n\nO elemento Minimax será: %d e está na coluna %d.\n", menor, colunaMinimax +1);


    return 0;
}
