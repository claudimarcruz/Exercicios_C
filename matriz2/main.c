#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int m[4][4], i, j, cont=0;

    for (i=0; i<4; i++){
        for(j=0; j<4; j++){
            scanf("%d", &m[i][j]);
        }

    }


    for (i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("[%d ]", m[i][j]);

        }
        printf("\n");

    }
        for (i=0; i<4; i++){
            for(j=0; j<4; j++){
                if (m[i][j] > 10){
                    m[i][j]=cont;
                    cont++;
            }
        }

    }
             printf("\nA quantidade de valores maiores que 10 é: %d", cont);

    return 0;
}
