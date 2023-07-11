#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int procura(int vetor[30], int numero){
    int i,cont=0;

    for(i=0;i<30;i++){
        if(vetor[i]==numero){
            cont++;
        }
    }
    return cont;
    }
    int aleatorio(int max){
    return rand()%max+1; }

int main()
{
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));

    int vet[30],n,i;


     for (i=0; i<30; i++){

        vet[i]= aleatorio(100);
        printf("[%d] ",vet[i]);

        }

        printf("\n Insira um número:");
        scanf("%d",&n);


        printf("\n O numero %d está %d vezes no vetor. ",n,procura(vet,n));


    return 0;
}
