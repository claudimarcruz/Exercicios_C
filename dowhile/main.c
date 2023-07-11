#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    float nota1, nota2, media;
    int resposta;

    do{
    printf("Informe a primeira nota:");
    scanf("%f",&nota1);
    printf("Informe a segunda nota:");
    scanf("%f",&nota2);

    media=(nota1 + nota2)/2;

    printf("A média do aluno é:%.2f\n",media);

    printf("\nDigite 1 para continuar ou 2 para sair:");
    scanf("%d",&resposta);
    }
    while(resposta==1);

    return 0;
}



