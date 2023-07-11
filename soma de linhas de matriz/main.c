#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    srand(time(NULL));

   int m[30][11], i, j, soma;

    for(i=0; i<30; i++){
        for(j=0; j<10; j++){
            m[i][j]= rand()%101;
        }
    }
    for(i=0; i<30; i++){
            soma=0;
        for(j=0; j<10; j++){
        soma = soma+m[i][j];

        }

         m[i][10]=soma;

        }

        for(i=0; i<30; i++){
        for(j=0; j<11; j++){
            printf("[%d] ",m[i][j]);

        }
        printf("\n");
    }
    return 0;
}
