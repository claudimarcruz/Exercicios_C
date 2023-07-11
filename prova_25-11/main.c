#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;

    char c;
    char nome[100];
    int idade;
    int quantPessoas =0;

    arquivo = fopen("arquivo_teste.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao criar arquivo");
        return 1;
    }
    do{
        fflush(stdin);
        printf("\nDigite o seu nome: ");
        fgets(nome, 100, stdin);
        fprintf(arquivo, "%s", nome);
        fflush(stdin);


        printf("\nDigite a sua idade:");
        printf("\n");
        scanf("%d",&idade);
        fprintf(arquivo, "%d", idade);
        quantPessoas++;


        }while(quantPessoas <5);


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

