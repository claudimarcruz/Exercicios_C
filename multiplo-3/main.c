#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{


    int vetor[30], i;

    srand(time(NULL));

    for (i=0; i<30; i++){
        vetor[i]= 1+ (rand()%100);
         if (vetor[i]%3!=0){
           i--;}
    }
    for(i=0; i<30; i++){
    printf("%d ", vetor[i]);
    }
    return 0;
}
