#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
        char nome[50];
        float altura;
        float peso;
    }dados;

int main()
{
    setlocale(LC_ALL, "portuguese");

    dados d;
    float imc;

    printf("Digite o seu nome: ");
    fgets(d.nome, 50, stdin);
    printf("\nDigite sua altura: ");
    scanf("%f", &d.altura);
    fflush(stdin);
    printf("\nDigite seu peso: ");
    scanf("%f", &d.peso);

    imc = d.peso/(d.altura * d.altura);

    printf("\nO seu IMC é: %.2f", imc);

    if(imc < 17){
        printf("\nMuito abaixo do peso");
    }else if((imc >= 17) && (imc <= 18.49)){
        printf("\nAbaixo do peso");
    }else if((imc >= 18.5) && (imc <= 24.9)){
        printf("\nPeso normal");
    }else if((imc >=25) && (imc <= 29.9)){
        printf("\nAcima do peso");
    }else if((imc >= 30) && (imc <= 34.99)){
        printf("\nObesidade I");
    }else if((imc >=35) && (imc <= 39.9)){
        printf("\nObsesidade II (severa)");
    }else if( imc >= 40){
        printf("\nObesidade III (mórbida");
    }


    return 0;
}
