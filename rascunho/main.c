#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;

    char c;
    char texto[100];

    arquivo = fopen("arquivo_teste.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao criar arquivo");
        return 1;
    }

    printf("\nDigite o texto: ");
    fgets(texto, 100, stdin);
    fprintf(arquivo, "%s", texto);

   // fprintf(arquivo, "uksdgvsdvgsdiuvbhsadihvihbdsiavh %c", 2620);
    fclose(arquivo);

    arquivo = fopen("arquivo_teste.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao abrir arquivo");
        return 1;
    }


    c = fgetc(arquivo);

    while(feof(arquivo)==0){
        printf("%c",c);
        c = fgetc(arquivo);
    }

    fclose(arquivo);


    return 0;
}


