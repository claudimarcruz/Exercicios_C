#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int m[3][3],t[3][3],i,j,aux;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Informe um valor:");
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nMatriz original:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("[%d] ", m[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
         t[i][j]=m[j][i];
        }
    }

     printf("\nMatriz transposta:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("[%d] ", t[i][j]);
        }
        printf("\n");
    }



    return 0;
}


