#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    srand(time(NULL));

    int m[10][10], i, j, aux;

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            m[i][j]= rand()%101;
        }

    }
    printf("Matriz original\n");
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("[%d] ", m[i][j]);
        }
        printf("\n");
    }

    for(j=0; j<10; j++){
        aux = m[1][j] ;
        m[1][j] = m[7][j];
        m[7][j] = aux;
    }
    printf("\nMatriz modificada\n");
     for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("[%d] ", m[i][j]);
        }
        printf("\n");
    }


    return 0;
}
