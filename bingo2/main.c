#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    srand(time(NULL));

    int m[5][5], i,j,a,b,cont;

    for (i=0; i<5; i++){
        for(j=0; j<5; j++ ){
            do{
            cont=0;
            m[i][j]=rand()%100;

    for (a=0; a<5; a++){
        for(b=0; b<5; b++){
            if ((m[i][j]==m[a][b]) && (i!=a && j!=b)){
                cont++;

                }

        }
    }

            }while(cont==1);

        }
    }

    for (a=0; a<5; a++){
        for(b=0; b<5; b++){
            printf("[%d] ",m[a][b]);
                cont++;

                }
                printf("\n");}

    return 0;
}
