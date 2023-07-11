#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

FILE *arquivo;
FILE *arquivo2;

void criar_Arquivo(char nome[12])
{
     arquivo = fopen(nome, "w");

     if(arquivo == NULL)
     {
        printf("\nErro ao criar o arquivo!\n");
        return 1;
     }
     fflush(stdin);
     printf("\nArquivo criado com sucesso! \n\nCom o nome de: %s \n\n", nome);
     fclose(arquivo);
}


void codifica(char s[200], int tamanho, int Rand)
{
    int i, j;
    for (i=0; i <= tamanho - 1 ; i++)
    {
        j = s[i];
        j = j + Rand;
        s[i] = j;
        printf("%c", s[i]);
    }
    printf("\n\n");
}


void descodifica(char s[200], int tamanho, int rand)
{
    int i, j;
    for (i=0; i<= tamanho-1; i++)
    {
        j = s[i];
        j = j - rand;
        s[i] = j;
        printf("%c", s[i]);
    }
    printf("\n\n");
}

int main()
{
    //setlocale(LC_ALL, "portuguese");

    srand(time(NULL));
    int opcao =0;
    int criar = 0;
    int conteudo =0;
    int tamanho =0;
    char nome_arquivo[12];
    char arquivo_usuario[12];
    char texto[200];
    char texto_decodificado[200];
    char nome_arquivo_recebido[12];

    printf("\n----------------------------------");
    printf("\n\tEditor de texto\n");

    do
    {
        printf("----------------------------------\n\n");
        printf("[1] Criar arquivo\n");
        printf("[2] Editar arquivo\n");
        printf("[3] Salvar arquivo\n");
        printf("[4] Ler arquivo criado\n");
        printf("[5] Traduzir mensagem recebida\n");
        printf("[6] Sair\n");
        printf("\nOpcao: ");
        fflush(stdin);
        scanf("%d", &opcao);
        printf("\n----------------------------------\n");

        switch (opcao)
        {
        case 1:

        strcpy(nome_arquivo, "iponkjh.txt");

        criar_Arquivo(nome_arquivo);

        criar = 1;
        opcao = 0;

        fflush(stdin);
        break;

        case 2:
            if(criar == 1)
            {
                fflush(stdin);
                printf("\nExemplo de saida de arquivo: 'arquivo.txt'\n");
                printf("\nInforme o nome do arquivo criado acima: ");
                fgets(arquivo_usuario, 12, stdin);
                if(strcmp(arquivo_usuario, "iponkjh.txt") == 0)
                {
                    printf("\nArquivo encontrado!\n\n");
                    arquivo = fopen(nome_arquivo, "a");

                    if(arquivo == NULL){
                        printf("Erro ao abrir arquivo!");
                        return 1;
                    }
                    fflush(stdin);
                    printf("Digite sua mensagem: ");
                    fflush(stdin);
                    fgets(texto, 200, stdin);
                    tamanho = strlen(texto) - 1;
                    printf("\nMensagem criptografada: ");
                    codifica(texto, tamanho, tamanho);
                    conteudo = 1;
                    fprintf(arquivo, "%s", texto);

                    printf("\nAtencao: Apos edicao salve o arquivo na opcao[3]\n.");
                }else
                {
                    printf("\nErro! Nome do arquivo incorreto!\n\n");
                }

            }else
            {
                printf("\nVoce nao criou o arquivo\n");
            }

            break;

        case 3:
            if((criar == 1) && (conteudo == 1))
            {
                fclose(arquivo);
                printf("\nArquivo salvo com sucesso!\n\n");
            }else
            {
                printf("\nArquivo nao criado ou arquivo vazio, por isso nao pode ser salvo.\n\n");
            }
            fflush(stdin);
            opcao =0;
            break;

        case 4:
            arquivo = fopen(nome_arquivo, "r");

            if(arquivo == NULL)
            {
                printf("\nErro ao abrir o arquivo");
                return 1;
            }
            printf("\nMensagem descriptografada: ") ;

           while(feof(arquivo) ==0)
           {
                fgets(texto_decodificado, 200, arquivo);
           }
            tamanho = strlen(texto) - 1;
            descodifica(texto_decodificado, tamanho, tamanho);

            fclose(arquivo);
            break;

        case 5:

            fflush(stdin);
            printf("\nDigite ou cole o texto criptografado: ");
            gets(nome_arquivo_recebido);
            tamanho = strlen(nome_arquivo_recebido);
            printf("\nTexto descodificado: ");
            descodifica(nome_arquivo_recebido, tamanho, tamanho);
            break;

        case 6:
            printf("Obrigado! %c %c", 2,3);
            printf("\n----------------------------------\n");
            break;
        default:
            printf("\nNumero nao reconhecido! = %d\n", opcao);
        }
    }while(opcao != 6);

    return 0;
}
