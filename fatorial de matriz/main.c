#include <stdio.h>
#include <stdlib.h>


void fatorial(int matriz[5][5],int f[5][5]){

    int i,j,cont,fat=1;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cont = matriz[i][j];

            while(cont>1){
                fat = fat * cont;
                cont--;

            }
            f[i][j] = fat;
            fat =1;
        }
    }}

    int aleatorio(int max){
        return rand()%max+1;
        }

int main()
{
    int matriz[5][5],m_fatorada[5][5];;
    int i, j , fat=1, cont;


    srand(time(NULL));

    printf("Matriz original\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            matriz[i][j] = aleatorio(5);
            printf("[%d]",matriz[i][j]);
        }
        printf("\n");
    }


    fatorial(matriz,m_fatorada);
    printf("\nMatriz fatorada\n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("[%d]",m_fatorada[i][j]);
        }
        printf("\n");
    }
}

