#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int vetor1[10],vetor2[10],resultado=0,cont=0;

    int i;

    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));

    printf("\nVetor 1:\n");
    for(i=0;i<10;i++){
        scanf("%d",&vetor1[i]);

    }

    printf("\nVetor 2:\n");
    for(i=0;i<10;i++){
        scanf("%d",&vetor2[i]);
    }

    printf("\n");

    for(i=0;i<10;i++){
        printf("[%d]",vetor1[i]);
    }

    printf("\n\n");

    for(i=0;i<10;i++){
        printf("[%d]",vetor2[i]);
    }


    while(cont < 10){
        for(i=0;i<10;i++){
            if(vetor1[cont]==vetor2[i]){


            resultado++;
            }
            }

    cont++;
}

    if(resultado==10){
        printf("\n\nÉ permutação!\n");
    }else{
        printf("\n\nNão é permutação!\n");
    }


    return 0;



}
