#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

     int v[34], i=0;

     for(i=0; i<34; i++){
        v[i]= v[i+2];
        printf("[%d] ",v[i]);
     }




         return 0;
}


