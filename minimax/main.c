#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int aleatorio(int max){
    return rand()%max+1;
 }
    void minimax(int m[5][5], int *linha,int *coluna,int *elemento){
    int i,j,maior=0,menor=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if (m[i][j]>maior){
                maior=m[i][j];
                *linha =i;
    }}}
    menor = m[*linha][0];
    for(i=0;i<5;i++){
        if(m[*linha][j]<menor){
            menor = m[*linha][j];
            *coluna= j;
        }
    }

    *elemento = m[*linha][*coluna];


    }
int main()
{
    srand(time(NULL));

    setlocale(LC_ALL,"portuguese");

    int m[5][5],i,j,linha,coluna,elementoMinimax;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            m[i][j]=aleatorio(100);
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("[%d] ",m[i][j]);
        }
        printf("\n");
    }

    minimax(m,&linha,&coluna,&elementoMinimax);


    printf("Linha do elemento minimax:%d \n",linha);
    printf("Coluna do elemento minimax:%d \n",coluna);
    printf("Elemento minimax:%d \n",elementoMinimax);

    return 0;
}
