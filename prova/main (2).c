#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>



int par(int matriz[6][6]){
    int cont =0;
    int i;
    int con =0;
    int k =0;
    int soma =0;
    int s =0;



    while(cont < 6){
        for(i=0;i<6;i++){
            if(matriz[cont][i] %2 ==0){
                k++;
                soma = soma + matriz[cont][i];
            }
            if(k ==4){
                cont ++;
                s = s + soma;
            }
            k =0;
            soma =0;
        }
    }


    return s;

}

int main()
{
    int matriz[6][6];
    int i;
    int j;

    srand(time(NULL));

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            matriz[i][j] = rand()%11 +1;
        }
    }

    printf("matriz:\n\n");

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("[%d]",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\na a soma e de: %d",par(matriz);

    return 0;

}
