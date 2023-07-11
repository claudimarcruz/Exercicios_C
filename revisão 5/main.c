#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{   setlocale(LC_ALL,"portuguese");

    int m[3][3],t[3][3], i, j , aux;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d",&m[i][j]);
        }}
        printf("\n");
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
            printf("[%d] ",m[i][j]);
        }
        printf("\n");
        }


        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
            aux=m[i][j];
            m[i][j]=t[i][j];
            t[i][j]=aux;

        }}
        printf("\nA matriz transposta é:\n");
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
            printf("[%d] ",t[j][i]);
        }
        printf("\n");
        }





    return 0;
}
