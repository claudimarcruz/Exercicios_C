#include <stdio.h>
#include <stdlib.h>

    typedef struct{
    int numero;
    int horas;
    int minutos;

} hm;

int main(void)
{
    printf("Informe os minutos a serem convertidos: ");
    scanf("%f", &hm.numero);
    hm.horas = hm.numero / 60;
    hm.minutos = hm.numero % 60;

    printf("%d Horas e %d Minutos", horas, minutos);

    return 0;
}
