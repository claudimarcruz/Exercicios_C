#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    // cria ponteiro do arquivo
    FILE *arquivo;
    char c;
    int vogais=0, consoantes=0;

    // abre o arquivo
    arquivo = fopen("exercicio2.txt", "r");

    // verifica se o arquivo foi aberto corretamente
    if(arquivo==NULL){
        printf("Falha ao abrir arquivo!");
        return 1;
    }

    while(feof(arquivo)==0){
        c = fgetc(arquivo);
        printf("%c", c);
        if((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u')){
            vogais++;
        }else if((c>=97) && (c<=122)){
            consoantes++;
        }
    }

    printf("\nQuantidade de vogais: %d", vogais);
    printf("\nQuantidade de consoantes: %d", consoantes);

    fclose(arquivo);


    return 0;
}
