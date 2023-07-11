#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int aleatorio (int max){
    return rand()%max+1;
}

int main()
{
    setlocale(LC_ALL,"portuguese");

    srand(time(NULL));

    int m[6][6],i,j,soma=0;

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            m[i][j]=aleatorio(10);
            printf("[%d] ",m[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
         if((i%2==0) && (j%2==0)){
            soma+=m[i][j];
         }

        }

    }
    printf("\nSoma:%d",soma);



    return 0;
}
