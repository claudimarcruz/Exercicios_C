#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int i, tamanho;
    char s[10];

    printf("Informe uma string:");
        gets(s);
        tamanho = strlen(s);

    printf("A string invertida é:");
        for (i=tamanho; i>=0 ; i--){
        printf("%c", s[i]);
    }

    getchar();




    return 0;
}
