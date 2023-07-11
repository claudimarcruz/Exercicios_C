#include <stdio.h>
#include <stdlib.h>

int aleatorio(int max){
    return rand()%max+1;
    }


int main()
{
    int vetor[10],i;

    for(i=0;i<10;i++){
        vetor[i]=aleatorio(10);
        printf("[%d] ",vetor[i]);
    }

    return 0;
}
