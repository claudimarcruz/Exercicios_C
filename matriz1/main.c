#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int m[6][6],i,j,A;



    for (i=0; i<6; i++){
        for (j=0; j<6; j++){
        scanf("%d",&m[i][j]);
        }
        }

        printf("Digite um valor:");
        scanf("%d", &A);



     for (i=0; i<6; i++){
        for (j=0; j<6; j++){
        m[i][j]=m[i][j]*A;
        }
        }




    for (i=0; i<6; i++){
        for (j=0; j<6; j++){


            printf("[%d] ", m[i][j]);

        }
        printf("\n");
    }

    return 0;
}
