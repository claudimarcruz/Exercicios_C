#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int linhas_nulas( int matriz [4][4]){
        int n,m,zeros,linhas=0;

        for(n=0;n<4;n++){
            zeros=0;
            for(m=0;m<4;m++){
                if(matriz[n][m]==0){
                zeros++;
        }}

  if(zeros==4){
               linhas++;
            }}
        return linhas;
    }
int colunas_nulas( int matriz [4][4]){
    int n,m,zeros,colunas=0;


        for(m=0;m<4;m++){
            zeros=0;
            for(n=0;n<4;n++){
                if(matriz[n][m]==0){
                zeros++;
        }}
            if(zeros==4){
               colunas++;
            }}
        return colunas;
}
int aleatorio (int max){
    return rand()%max;
    }

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL,"portuguese");

    int matriz[4][4],n,m;

    for(n=0;n<4;n++){
        for(m=0;m<4;m++){
            matriz[n][m]=aleatorio(2);
            printf("%d",matriz[n][m]);
        }
        printf("\n");
    }

        printf("\nLinhas nulas:%d\n",linhas_nulas(matriz));

       printf("\nColunas nulas:%d\n",colunas_nulas(matriz));

 return 0;
}
