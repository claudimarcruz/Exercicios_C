#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
typedef struct item
{
    int senha;
    struct item *prox;
}node;


typedef struct item2
{
    int senha2;
    struct item2 *prox2;
}node2;


void criarFila(node *fila)
{
    fila->prox = NULL;
}


void criarFila2(node2 *fila)
{
    fila->prox2 = NULL;
}


int vazia(node fila)
{
    if(fila.prox == NULL)
    {
        return 1;
    }else
    {
        return 0;
    }
}


int vazia2(node2 fila2)
{
    if(fila2.prox2 == NULL)
    {
        return 1;
    }else
    {
        return 0;
    }
}


void inserir(node *fila, int senha)
{
    node *novo = (node*) malloc(sizeof(node));
    if(novo == NULL)
    {
        printf("\nsem espaco na memoria\n");
    }else
    {
        novo->senha = senha;
        novo->prox = NULL;
        if(vazia(*fila)==1)
        {
            fila->prox = novo;
        }else
        {
            node *aux = fila->prox;
            while(aux->prox != NULL)
            {
                aux = aux->prox;
            }
            aux->prox = novo;
        }
    }
}


void inserir2(node2 *fila2, int senha)
{
    int i =0;

    node2 *novo = (node2*) malloc(sizeof(node2));
    if(novo == NULL)
    {
        printf("\nsem espaco na memoria\n");
    }else
    {
        novo->senha2 = senha;
        novo->prox2 = NULL;
        if(vazia2(*fila2)==1)
        {
            fila2->prox2 = novo;
        }else
        {
            node2 *aux = fila2->prox2;
            while(aux->prox2 != NULL)
            {
                aux = aux->prox2;
            }
            aux->prox2 = novo;
        }
    }
}


void imprimir(node fila)
{
    if(vazia(fila) ==1)
    {
        printf("\nA fila esta vazia\n");
    }else
    {
         printf("\n------------------------Fila normal-----------------\n");
        node *aux = fila.prox;
        while(aux != NULL)
        {
            printf("\n Senha: %d", aux->senha);
            aux = aux->prox;
        }
        printf("\n-------------------------------------------------\n");
    }
}


void imprimir2(node2 fila2)
{
    if(vazia2(fila2) ==1)
    {
        printf("\nA fila esta vazia\n");
    }else
    {
        printf("\n------------------------Fila preferencial-----------------\n");
        node2 *aux2 = fila2.prox2;
        while(aux2 != NULL)
        {
            printf("\n Senha: %d", aux2->senha2);
            aux2 = aux2->prox2;
        }
        printf("\n----------------------------------\n");
    }
}



void desinfeleirar(node fila, node2 fila2)
{

    if(vazia(fila) == 1)
    {
            node2 *aux = fila2.prox2;
            while(aux != NULL)
            {
                printf("\n Senha prioridade: %d\n", aux->senha2);
                aux = aux->prox2;
            }
    }else if(vazia2(fila2)== 1)
    {
        node *aux = fila.prox;
        while(aux != NULL)
        {
             printf("\n Senha normal: %d\n", aux->senha);
             aux = aux->prox;
        }
    }else
    {
        int i =0;
        int j =0;

        node *aux = fila.prox;
        node2 *aux2 = fila2.prox2;

        while((aux !=NULL) ||(aux2 != NULL))
        {
            if(i <=1)
            {
                if(aux2 != NULL)
                {
                    printf("\nSenha prioritaria: %d\n", aux2->senha2);
                    aux2 = aux2->prox2;
                    i++;
                }else if(aux2 == NULL)
                {
                    i = 2;
                }

                if((aux != NULL) && (i == 2))
                {
                    j =0;
                }
            }else if(j < 1)
            {
                if(aux != NULL)
                {
                    printf("\nSenha normal: %d\n", aux->senha);
                    aux = aux->prox;
                    j++;
                }else if(aux == NULL)
                {
                    j =1;
                }
                if(aux2 != NULL)
                {
                    i =0;
                }
            }else if(aux  !=NULL)
            {
                j =0;
            }else if(aux2 != NULL)
            {
                i =0;
            }
        }
    }
}


int main()
{
    int k =0;
    int d = 1;

    node fila1;
    criarFila(&fila1);

    node2 fila2;
    criarFila2(&fila2);

    srand(time(NULL));
    int j = 1;
    printf("\n----------------------------------\n");
    printf("---------------------Seja bem vindo :) ----------------  \n");

    while(j != 5){
        printf("\n-----------------------------------------\n");
        printf("\n[1] Gerar senha da fila normal:\n");
        printf("\n[2] Gerar senha da fila preferencial\n");
        printf("\n[3] Desenfileirar\n");
        printf("\n[4] Imprimir Fila\n");
        printf("\n[5] Sair\n");
        printf("\n-----------------------------------------\n");
        scanf("%d", &j);

        if(j == 1)
        {
            k = k + 2;
        }else if(j == 2)
        {
            d = d + 2;
        }

        switch(j)
        {
        case 1:
          //  filanormal();
          inserir(&fila1, k);
            break;

        case 2:
           // filapreferencial();
           inserir2(&fila2, d);
            break;

        case 3:
            desinfeleirar(fila1, fila2);
            system("pause");
         //   chamadaFila();
            break;

        case 4:
           // imprimirFila();
           imprimir(fila1);
           imprimir2(fila2);
           system("pause");
            break;

        case 5:
            printf("\n-----------Obrigado ;) ---------------\n");
            break;

        default:
            printf("\nnumero informado não corresponde! Tente novamente\n");
        }
    }
    return 0;
}

*/
typedef struct item {
    int senha;
    struct item *prox;
}node;

void criaFila(node *fila) {
    fila->prox = NULL;
}

int controle = 0;

int vazia(node fila) {
    if(fila.prox == NULL) {
        return 1;
    } else{
        return 0;
    }
}

void inserir(node *fila, int senha) {
    node *novo = (node*) malloc(sizeof(node));

    if(novo == NULL) {
        printf("Sem espaco na memoria");
    }else
    {
        novo->senha = senha;
        novo->prox = NULL;
        if(vazia(*fila)==1) {
            fila->prox = novo;
        }else {
            node *aux = fila->prox;
            while(aux->prox != NULL) {
                aux = aux->prox;
            }

            aux->prox = novo;

        }
    }
}

void fila_enfileira_normal(node *filaN, int senha) {
    inserir(filaN, senha);
    }


void fila_enfileira_preferencial(node *filaP, int senha) {
    inserir(filaP, senha);
    }


 node* remover(node *fila) {
        node *aux = fila->prox;
        fila->prox = aux->prox;
        return aux;
}

void desenfileirar(node *filaN, node *filaP) {
    if(controle <2) {
        if(vazia(*filaP)==0){
            node *aux = remover(filaP);
            printf("Chamada da senha preferencial: %d\n", aux->senha);
            controle++;
        }else if(vazia(*filaN)==0) {
            node *aux = remover(filaN);
            printf("Chamada da senha normal: %d\n", aux->senha);
            controle = 0;
        }else{
            printf("Nao ha ninguem nas filas");
        }
    }else {
            if(vazia(*filaN)==0){
            node *aux = remover(filaN);
            printf("Chamada da senha normal: %d\n", aux->senha);
            controle = 0;
        }else if(vazia(*filaP)==0) {
            node *aux = remover(filaP);
            printf("Chamada da senha prefencial: %d\n", aux->senha);
            controle++;
        }else{
            printf("Nao ha ninguem nas filas");
        }
    }

    printf("\n");
}




void imprimir(node filaN, node filaP){
    if(vazia(filaN)==1){
        printf("A fila normal esta vazia!!!");
    }else{
        node *aux = filaN.prox;
        printf("FILA NORMAL\n ");
        while(aux != NULL){
            printf("<- [%d] ", aux->senha);
            aux = aux->prox;
        }
    }
    printf("\n");

    if(vazia(filaP)==1){
        printf("A fila preferencila esta vazia!!!");
    }else{
        node *aux = filaP.prox;
        printf("FILA PREFERENCIAL\n ");
        while(aux != NULL){
            printf("<- [%d] ", aux->senha);
            aux = aux->prox;
        }
    }
    printf("\n");
}







int main()
{
    node filaN, filaP;

    criaFila(&filaN);

    criaFila(&filaP);


    srand(time(NULL));


    int op, senha = 1;
    printf("\n----------------------------------\n");
    printf("---------------------Seja bem vindo :) ----------------  \n");

    do {

        system("cls");
        printf("\n-----------------------------------------\n");
        printf("\n[1] Gerar senha da fila normal:\n");
        printf("\n[2] Gerar senha da fila preferencial\n");
        printf("\n[3] Desenfileirar\n");
        printf("\n[4] Imprimir Fila\n");
        printf("\n[5] Sair\n");
        printf("\n-----------------------------------------\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch(op)
        {
        case 1:

            senha == 1;
            fila_enfileira_normal(&filaN, senha++);
            break;

        case 2:

            fila_enfileira_preferencial(&filaP, senha++);

            break;

        case 3:
            desenfileirar(&filaN, &filaP);
            system("pause");
            break;

        case 4:

            imprimir(filaN, filaP);
            system("pause");

            break;

        case 5:
            printf("\n-----------Obrigado ;) ---------------\n");
            break;

        default:
            printf("\nnumero informado nao corresponde! Tente novamente\n");
            system("pause");


        }
    }while(op != 5);

    return 0;
}

