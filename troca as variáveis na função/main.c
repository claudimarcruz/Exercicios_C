#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void troca(int v1, int v2, int *a1, int *a2 ){
    *a1=v2;
    *a2=v1;
    }

int main()
{
    setlocale(LC_ALL,"portuguese");

    int v1, v2,a1,a2;

    printf("Informe a primeira variável: ");
    scanf("%d",&v1);
    printf("Informe a segunda variável: ");
    scanf("%d",&v2);

    printf("\nVariáveis informadas:\n");
    printf("%d e %d \n",v1,v2);

    troca(v1,v2,&a1,&a2);
    printf("\nVariáveis trocadas:\n");
    printf("%d e %d \n",a1,a2);
    return 0;
}
