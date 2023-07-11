#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int m[4][4], i, j, maior=0;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            scanf("%d",&m[i][j]);
        }
    }

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){


            if(m[i][j]> maior){
                maior=m[i][j];
            }
        }
    }

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){

            printf("[%d] ",m[i][j]);
        }
        printf("\n");
        }

        printf(" \nO maior número digitado é:%d",maior);

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){

    if (m[i][j]==maior){

        printf("\n Ele está na linha %d coluna %d.",i+1,j+1);
    }

    }
    }
    return 0;
}
