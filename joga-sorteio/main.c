#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    srand(time(NULL));

    int v[5], i, n1, n2, n3, verificaN1 = 0, verificaN2 = 0, verificaN3 = 0;
    for(i=0; i<5; i++){
        v[i] = rand()%11;
        printf("[%d] ",v[i]);

    }

    printf("\nInforme o primeiro número:");
    scanf("%d", &n1);
    printf("Informe o segundo número:");
    scanf("%d", &n2);
    printf("Informe o terceiro número:");
    scanf("%d", &n3);

    for (i=0; i<5; i++){
        if (v[i]==n1){
            verificaN1 = 1;
        }

        if (v[i]==n2){
            verificaN2 = 1;
        }

        if (v[i]==n3){
            verificaN3 = 1;
        }
   }

   if( (verificaN1==1) && (verificaN2==1) && (verificaN3==1)){
    printf("GANHOU!!!!");

   }
    else{
        printf("PERDEU");
    }


    return 0;
}
