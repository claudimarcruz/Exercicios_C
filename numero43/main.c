#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");



    int i, vetor[20], numero, guard=0;

    for(i=0; i<20; i++){
        printf("Digite o %d� n�mero:", i+1);
        scanf("%d", &vetor[i]);
        }

    printf("Digite o n�mero a ser consultado:");
    scanf("%d",&numero);

     for(i=0; i<20; i++){
            if(numero == vetor[i]){
                guard=1;
    }
    }

     if(guard ==1){
        printf("\n O n�mero %d est� no vetor abaixo \n", numero);
     }
     else{
        printf("\n O n�mero %d n�o est� no vetor abaixo \n", numero);

     }

     for(i=0; i<20; i++){
            printf("[%d] \n", vetor[i]);
     }


     return(0);
}





