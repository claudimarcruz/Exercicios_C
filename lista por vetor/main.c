#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tamanhoLista 10

// criação do ítem da lista
typedef struct{
    int id;
    float preco;
    float desconto;
}TipoItem;

//******************************************************************

// guardar alguns itens, o início e o fim da lista
typedef struct{
    TipoItem itens[tamanhoLista];
    int inicio, fim;
}TipoLista;

//********************************************************************

// criando a lista
// * endereço de memória (quando vai alterar a lista), usa ->
void criaListra(TipoLista *lista) {
    lista -> inicio = 0;
    lista -> fim = 0;
}

//********************************************************************
// verificando se a lista está vazia
// lista por parâmetro usa .
int vazia (TipoLista lista1) {
    if(lista1.inicio==lista1.fim) {
        return 1;
    }else {
    return 0;
    }
}

//*********************************************************************

// conferindo se a lista esta cheia e inserindo dados na lista
void insere (TipoLista *lista1, TipoItem item) {
    if(lista1->fim > tamanhoLista) {
        printf("Lista Cheia");
    } else {
        lista1->itens[lista1->fim] = item;
        lista1->fim++;
    }
}

//********************************************************************

 // imprimindo a lista

 void imprime(TipoLista lista1)  {
    int i;
    if(vazia(lista1) == 1){
        printf("A lista está vazia");
    } else {
        printf("\nImpressão da lista:\n");
        for(i=lista1.inicio ; i< lista1.fim ; i++) {
        printf("%d - Preco: %.2f - Desconto: %2.f\n", lista1.itens[i].id, lista1.itens[i].preco, lista1.itens[i].desconto);
        }
    }

    printf("\n");

}

//*********************************************************************

// excluir elemento da lista

void removeItem(TipoLista *lista1, int pos) {
    int i;

    // verifica se a lista está vazia
    if(vazia(*lista1)==1){
        printf("A lista esta vazia");
    }else if(pos >= lista1->fim) {
        printf("Operacao Invalida");
    }else{
        for(i = pos ; i<lista1->fim ; i++){
            lista1->itens[i] = lista1->itens[i+1];
    }
        lista1->fim--;

    }
}

//*********************************************************************


// verificando se um determinado item está na lista


int verificarItem(TipoLista lista1, int id) {
    int i;
    for(i = lista1.inicio ; i < lista1.fim ; i++) {
        if(lista1.itens[i].id == id ){
            return i;
        }
    }return -1;
}

//***********************************************************************

// trocar a ordem de dois elementos

void trocaOrdem(TipoLista *lista1, int localItem1, int localItem2) {
    TipoItem aux;
    if((localItem1 < lista1->inicio) || (localItem1 >= lista1->fim)) {
        printf("Posição do item 1 inválida");
    }else if((localItem2 < lista1->inicio) || (localItem2 >= lista1->fim)) {
        printf("Posição do item 2 inválida");
    }else {
        aux = lista1->itens[localItem1];
        lista1->itens[localItem1] = lista1->itens[localItem2];
        lista1->itens[localItem2] = aux;
    }
}

//************************************************************************

// alterar o conteúdo da lista

void altera(TipoLista *lista1, int id) {
    int posItem = verificarItem(*lista1, id);
    if(posItem == -1){
        printf("O id não está presente na lista");
    } else {
        printf("Informe o novo id: ");
        scanf("%d", &lista1->itens[posItem].id);
        printf("Informe o novo preço: ");
        scanf("%f", &lista1->itens[posItem].preco);
        fflush(stdin);
        printf("Informe o novo desconto: ");
        scanf("%f", &lista1->itens[posItem].desconto);
    }
}

//*****************************************************************************

// imprimir um item específico

 void imprimeItem(TipoLista lista1, int id)  {
    int posItem = verificarItem(lista1, id);

    if(posItem == -1){
        printf("O id não está presente na lista");
    }else {
        printf("\nImpressão de um item da lista:\n");
        printf("%d - Preco: %.2f - Desconto: %2.f\n", lista1.itens[posItem].id, lista1.itens[posItem].preco, lista1.itens[posItem].desconto);
        printf("\n");

    }



}

//******************************************************************************

void zerarLista(TipoLista *lista1) {
    criaListra(lista1);
}

//**************************************************************************

// unir duas listas

void unirListas(TipoLista *lista1, TipoLista lista2){
    int i;
    for(i = lista2.inicio ; i < lista2.fim ; i++) {
        insere(lista1, lista2.itens[i]);
    }
}

//*****************************************************************************

//Copiar o conteúdo de uma lista para outra lista vazia.

void copiarLista(TipoLista lista1, TipoLista *lista2){
    int i;
    for(i = lista1.inicio ; i < lista1.fim ; i++){
        insere(lista2, lista1.itens[i]);
    }
}

//*************************************************************************

int main()
{
    setlocale(LC_ALL, "portuguese");

//***************************************************************

/* verificando se a lista está vazia
    TipoLista l;

    criaLista(&l);

    printf("%d", vazia(l));

*/

//*****************************************************************
    TipoLista lista1;
    TipoLista lista2;

    TipoItem item;

    criaListra(&lista1);

    // acrescentando dados na lista

    item.id = 1;
    item.preco = 50.0;
    item.desconto = 5.0;
    insere(&lista1, item);

    item.id = 2;
    item.preco = 500.10;
    item.desconto = 10.0;
    insere(&lista1, item);

    item.id = 3;
    item.preco = 1.20;
    item.desconto = 20.0;
    insere(&lista1, item);

    item.id = 4;
    item.preco = 200.50;
    item.desconto = 15.0;
    insere(&lista1, item);

    item.id = 5;
    item.preco = 0.50;
    item.desconto = 19.0;
    insere(&lista1, item);

    imprime(lista1);

//*******************************************************************
// criando lista 2


    criaListra(&lista2);
/*
    item.id = 575;
    item.preco = 0.50;
    item.desconto = 19.0;
    insere(&lista2, item);

    item.id = 576;
    item.preco = 0.50;
    item.desconto = 19.0;
    insere(&lista2, item);
*/
    imprime(lista2);

//************************************************************************

//Copiar o conteúdo de uma lista para outra lista vazia.

    copiarLista(lista1, &lista2);

    imprime(lista2);

//**************************************************************************
   // unirListas(&lista1, lista2);

   // imprime(lista1);




//*******************************************************************
// zerar a lista
/*
    zerarLista(&lista1);

    imprime(lista1);
*/
//********************************************************************
/*
    altera(&lista1,5);

    imprime(lista1);

*/

//********************************************************************


    //removeItem(&lista1, 3);
    //imprime(lista1);


//*************************************************************************



    // verificando se o item está na lista
     /*if(verificarItem(lista1, 300)!= -1) {
        printf("Presente na lista");
    } else {
        printf("Ausente na lista");
    }
*/

//**************************************************************************

/*
    // troca o lugar
    trocaOrdem(&lista1, 1, 3);
    printf("\nLista com elementos trocados\n");
    imprime(lista1);

*/

//***************************************************************************
/*
// imprimir um item específico
    imprimeItem(lista1, 3);
    imprimeItem(lista1, 30);

*/

//******************************************************************************
    return 0;
}

//*****************************************************************************

/*
1 - Verificar se determinado item está presente na lista. (utilize o ID como referência para a busca)
2 - Trocar a ordem de dois elementos
3 - Alterar o conteúdo de um item da lista
4 - Imprimir um item específico (busca pelo código)
5 - Zerar a lista
6 - Fundir (unir) duas listas em uma.
7 - Copiar o conteúdo de uma lista para outra lista vazia.
*/
