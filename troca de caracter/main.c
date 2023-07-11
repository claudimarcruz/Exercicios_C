#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    char s[20], chAtual, chNovo;
    int i,c=0, tamanho;

    printf ("Digite uma string:\n");
    gets(s);

    printf ("Digite o caracter que quer substituir:\n");
    scanf ("%c", &chAtual);

    printf ("Digite o novo caracter:\n");
    scanf (" %c", &chNovo);

    tamanho=strlen(s);


    for (i=0; i<tamanho; i++){
        if (s[i]==chAtual){

              s[i]=chNovo;
                c++;


        }

    }


    printf ("A string modificada é: \n %s", s);

    printf(" \n O numero de substituições é: %d:",c);

    getchar();

    return 0;
}








