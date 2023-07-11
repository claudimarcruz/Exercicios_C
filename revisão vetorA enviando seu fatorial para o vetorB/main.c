#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int aleatorio(int max){
    return rand()%max+1;
}
void fatorial(int vetor_original[10],int vetor_fatorado[10]){

    int i,cont=0,fat=1;

    for(i=0;i<10;i++){

            cont = vetor_original[i];

            while(cont>1){
                fat = fat * cont;
                cont--;

            }
            vetor_fatorado[i] = fat;
            fat =1;

    }}




int main()
{
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));

    int vetorA[10],vetorB[10],i;

    printf("Vetor original\n");
    for(i=0;i<10;i++){
        vetorA[i]=aleatorio(7);
        printf("[%d] ",vetorA[i]);
    }
    printf("\n\nVetor fatorado\n");

    fatorial(vetorA,vetorB);
    for(i=0;i<10;i++){
        printf("[%d] ",vetorB[i]);
    }


    return 0;
}
