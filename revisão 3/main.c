#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   setlocale(LC_ALL,"portuguese");

    int vetor[10],i,maior;

    for (i=0; i<10; i++){
        printf("Informe o %dº valor:",i+1);
        scanf("%d",&vetor[i]);
    }

    for (i=0; i<10; i++){
        printf("[%d] ",vetor[i]);
    }


    maior=vetor[0];
    for (i=1; i<10; i++){
        if(vetor[i]> maior){
            maior=vetor[i];
        }
    }

    printf("\n O maoir valor é:%d \n",maior);

    printf("\n O vetor alterado é: \n");

    for (i=0; i<10; i++){
        vetor[i]*=maior;
        printf("[%d] ",vetor[i]);
    }

    return 0;
}
