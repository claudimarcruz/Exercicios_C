#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[50], c;
    FILE *arquivo;
    int sair = 0;
    int linhas = 0;

    arquivo = fopen("exercicio1.txt", "w");

    if(arquivo == NULL) {
        printf("Falha ao abrir/ criar arquivo");
        return 1;
    }

    do {
        printf("Informe uma palavra ou 0 para sair: ");
        fgets(palavra, 50, stdin);

        if(strcmp(palavra, "0\n")==0){
            sair =1;
        }
        if(sair==0){
            fprintf(arquivo, "%s", palavra);
        }



    }while(sair==0);

    fclose(arquivo);

    arquivo = fopen("exercicio1.txt", "r");

    if(arquivo == NULL) {
        printf("Falha ao abrir/ criar arquivo");
        return 1;
    }

    printf("Conteudo do arquivo:\n");

    while(feof(arquivo)==0){
        c = fgetc(arquivo);
        printf("%c", c);
        if(c=='\n'){
            linhas++;
        }
    }

    fclose(arquivo);

    printf("\nNumero de linhas: %d", linhas);


    return 0;
}
