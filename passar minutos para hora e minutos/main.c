#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas, minutos,tempo;

    printf("Insira um tempo em minutos:");
    scanf("%d",&tempo);

    horas=tempo/60;
    minutos=tempo-(horas*60);


    printf("O tempo equivale a %d horas e %d minutos",horas,minutos);


    return 0;
}
