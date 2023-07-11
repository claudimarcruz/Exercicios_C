#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

typedef struct{
    int cod;
    char nome[50];
    int pontos;

}TipoTime;

void gravar(FILE *arquivo, TipoTime time){
    //posiciona o ponteiro no final do arquivo
    fseek(arquivo, 0, SEEK_END);
    fwrite(&time, sizeof(TipoTime), 1, arquivo);
}

void imprimir(FILE *arquivo){
    TipoTime time;
    //posiciona o ponteiro no inicio do arquivo
    fseek(arquivo, 0, SEEK_SET);
    while(feof(arquivo)==0){
        fread(&time, sizeof(TipoTime), 1, arquivo);
        if(feof(arquivo)==0){
            printf("Codigo: %d - Nome: %s - Pontuacao: %d\n", time.cod, time.nome, time.pontos);
        }
    }
}

int main()
{
    FILE *arquivo;
    TipoTime time;
    int contador = 0;

    arquivo = fopen("times.dat", "w+b");

    if(arquivo==NULL){
        printf("Falha ao ler o arquivo");
        return 1;
    }

    do{
        printf("Informe o codigo do time  ");
        scanf("%d", &time.cod);
        getchar();
        fflush(stdin);
        printf("Informe o nome do time: ");
        fgets(time.nome, 50, stdin);
        printf("\npontuacao do time:");
        scanf("%d", &time.pontos);

        time.nome[strlen(time.nome)-1] = '\0';


        gravar(arquivo, time);

        printf("\n");
        contador++;
    }while(contador < 1);

    imprimir(arquivo);

    fclose(arquivo);

    return 0;
}
