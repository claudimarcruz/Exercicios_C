#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int *vetor, i;

    vetor= (int *) malloc(3 * sizeof(int));

    if(vetor==NULL){
        printf("N�o tem mem�ria dispon�vel.");
    }else{
    vetor[0]=100;
    vetor[1]=200;
    vetor[2]=300;

    for(i=0;i<3;i++){
        printf("[%d] ",vetor[i]);
    }

    vetor= (int *) realloc(vetor, 6 * sizeof(int));

    if(vetor==NULL){
        printf("N�o foi poss�vel realocar mem�ria.");
    }else{
    vetor[3]=400;
    vetor[4]=500;
    vetor[5]=600;

    printf("\n");
    for(i=0;i<6;i++){
        printf("[%d] ",vetor[i]);
    }}

    free(vetor);

    }



    return 0;
}
