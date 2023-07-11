#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{



    int m[5][5]=rand()%100;
    int i, j, tmp = 0;


    for( i = 0; i < 5; i++){
        for( j = 0; j < 5; j++)
        {
            int a = rand()%100, b = rand()%100;
            tmp = m[a][b];
            m[a][b] = m[i][j];
            m[i][j] = tmp;
        }}

    for( i = 0; i < 5; i++){
        for( j = 0; j < 5; j++){
            printf("[%d]", m[i][j]);
    }
    printf("\n");
    }
    return 0;
}
