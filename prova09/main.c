#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main ()
{
    FILE *arquivo, *arquivo_saida;
    char c, cidade[30], habitantes[1000000];



    arquivo = fopen("cidade.txt", "r");
    arquivo_saida = fopen("habitantes.txt", "w");

    if (arquivo == NULL)
    {
        printf("falha ao abrir arquivo de entrada");
        return 1;
    }

    if (arquivo_saida == NULL)
    {
        printf("falha ao abrir arquivo de saida");
        return 1;
    }

    c = fgetc(arquivo);

    while (feof(arquivo) == 0)
    {
        memset(cidade, 0, 30);
        memset(habitantes, 0, 1000000);

        while (c !='@')
        {
            cidade[strlen(cidade)] = c;
            c = fgetc(arquivo);
        }

        c = fgetc(arquivo);

        while (c !='@')
        {
            habitantes[strlen(habitantes)] = c;
            c = fgetc(arquivo);
        }

        c = fgetc(arquivo);



        if(atoi(habitantes) >= 2722000  ){
            fprintf(arquivo_saida, "A cidade mais populosa e %s e possui %d\n", cidade, atoi(habitantes));

        }

        //printf("%s ", cidade);
        //printf("%s\n", habitantes);

       c = fgetc(arquivo);

    }

    fclose(arquivo);
    fclose(arquivo_saida);
        return 0;

}
