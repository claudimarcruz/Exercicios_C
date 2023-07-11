#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>

typedef struct{
    int cod;
    char nome[30];
    char sigla[5];
    char regiao[20];
}TipoEstado;


int main()
{
    FILE *arquivo;
    TipoEstado estados[27];
    char cod[5], nome[30], sigla[5], c;
    int cont=0, i;

    arquivo = fopen("estados.csv", "r");

    if(arquivo==NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    c = fgetc(arquivo);

    while(feof(arquivo)==0){

        memset(&cod, 0, 5);
        memset(&nome, 0, 30);
        memset(&sigla, 0, 5);

        while(c!=';'){
            cod[strlen(cod)] = c;
            c = fgetc(arquivo);
        }

        c = fgetc(arquivo);

        while(c!=';'){
            nome[strlen(nome)] = c;
            c = fgetc(arquivo);
        }

        c = fgetc(arquivo);

        while(c!=';'){
            sigla[strlen(sigla)] = c;
            c = fgetc(arquivo);
        }

        //printf("%s - %s - %s\n", cod, nome, sigla);
        estados[cont].cod = atoi(cod);
        strcpy(estados[cont].nome, nome);
        strcpy(estados[cont].sigla, sigla);

        cont++;

        c = fgetc(arquivo);
        c = fgetc(arquivo);
    }

    for(i=0; i<27; i++){
        if((estados[i].cod>10) && (estados[i].cod<=19)){
            strcpy(estados[i].regiao, "Norte");
        }else if((estados[i].cod>=20) && (estados[i].cod<=29)){
            strcpy(estados[i].regiao, "Nordeste");
        }else if((estados[i].cod>=30) && (estados[i].cod<=39)){
            strcpy(estados[i].regiao, "Sudeste");
        }else if((estados[i].cod>=40) && (estados[i].cod<=49)){
            strcpy(estados[i].regiao, "Sul");
        }else if((estados[i].cod>=50) && (estados[i].cod<=59)){
            strcpy(estados[i].regiao, "Centro Oeste");
        }
    }

    for(i=0; i<27; i++){
        printf("%d - ", estados[i].cod);
        printf("%s - ", estados[i].nome);
        printf("%s - ", estados[i].sigla);
        printf("%s\n", estados[i].regiao);
    }

    fclose(arquivo);


    return 0;
}
