#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,v[6];

    srand(time(NULL));

    for(i=0; i<6; i++){
        v[i] = rand()%60 + 1;
    }

    for(i=0; i<6; i++){
        printf("%d -", v[i]);
    }

    return 0;
}
