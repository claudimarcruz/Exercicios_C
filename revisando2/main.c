#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    char animal[20];

    printf("Digite o animal:");
    gets(animal);


   if ((animal= "gato") || (animal= "cachorro")){
        printf("vendo animal");
    }else{
        printf(" n�o vendo este tipo de animal");
        }

    return 0;
}
