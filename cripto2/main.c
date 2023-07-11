#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>


void codifica(char s[], int tamanho, int Rand){
    int i, j;
    for (i= tamanho-1; i>=0 ; i--){
        j = s[i];
        j = j + Rand;
        s[i] = j;
        printf("%c", s[i]);
    }
}


void descodifica(char s[], int tamanho, int Rand){
    int i, j;
    for (i=0; i<= tamanho-1; i++){
        j = s[i];
        j = j - Rand;
        s[i] = j;
        printf("%c", s[i]);
    }
}

int main()
{
    //setlocale(LC_ALL,"portuguese");
    int tamanho;
    char texto[1000];
    int troca;

    srand(time(NULL));
    troca = rand()% 25 + 1;
    //printf("\ntroca: %d", troca);

    printf("\nDigite o texto: ");
    gets(texto);
    tamanho = strlen(texto);
    //printf("\ntamanho: %d", tamanho);

    printf("\n\nString codificada: ");

    codifica(texto, tamanho, troca);

    printf("\n\nString descodificada: ");

    descodifica(texto, tamanho, troca);


    return 0;
}
