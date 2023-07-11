#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    int id;
    int numero;
    //demais campos
}TipoItem;

typedef struct celula_struct *apontador;

typedef struct celula_struct {
    TipoItem item;
    apontador prox;
}celula;

typedef struct {
    apontador primeiro, ultimo;
}TipoLista;

void criarLista(TipoLista *lista) {
    lista->primeiro = (apontador)malloc(sizeof(celula));
    lista->primeiro->prox = NULL;
    lista->ultimo = lista->primeiro;
}

int vazia(TipoLista lista){
    if(lista.primeiro == lista.ultimo){
        return 1;
    }else {
        return 0;
    }
}
 //inserir elemento

void inserirFinal(TipoLista *lista, TipoItem item) {
    lista->ultimo->prox = (apontador)malloc(sizeof(celula)); // é criado uma nova celula
    lista->ultimo = lista->ultimo->prox; // lista->ultimo->prox passa a apontar para a nova celula
    lista->ultimo->prox = NULL; // aponta para NULL
    lista->ultimo->item = item; // recebe um valor(ítem)
}

void imprimir(TipoLista lista) {
    if(vazia(lista)) {
        printf("\nLista vazia!!");
    } else{
        apontador aux = lista.primeiro->prox;
        printf("===Impressão da Lista===\n");
        while(aux != NULL) {
            printf("\nId: %d / Numero: %d\n", aux->item.id, aux->item.numero);
            aux = aux->prox; // continua percorrendo a lista
        }
    }
    printf("\n");
}

int quantElem(TipoLista lista) {
    int cont = 0;
    if(vazia(lista)) {
        printf("\nLista vazia!!");
    } else{
        apontador aux = lista.primeiro->prox;
        while(aux != NULL) {
            cont++;
            aux = aux->prox; // continua percorrendo a lista
        }
    }
    return cont;
}

void imprimirItem(TipoLista lista, int id) {
    if(vazia(lista)) {
        printf("\nLista vazia!!");
    } else{
        int achou = 0;
        apontador aux = lista.primeiro->prox;
        while(aux != NULL) {
            if(aux->item.id == id) {
            printf("===Impressão da Lista===\n");
            printf("\nId: %d / Numero: %d\n", aux->item.id, aux->item.numero );
            printf("\n");
            achou = 1;
            break;

        }
         aux = aux->prox;
        }
        if(achou==0) {
            printf("Nenhum item foi localizado com o id informado\n");
        }
    }

}

void removerItem(TipoLista *lista, int id){
    int achou = 0;
    if(vazia(*lista)){
        printf("Lista vazia!!!\n");
    }else{
        if(lista->primeiro->prox->item.id == id){
            apontador aux = lista->primeiro->prox;
            lista->primeiro->prox = aux->prox;
            free(aux);
            achou = 1;
        }else{
            apontador aux, anterior;
            aux = lista->primeiro->prox;
            while(aux != NULL){
                if(aux->item.id == id){
                    anterior->prox = aux->prox;
                    free(aux); //liberar memória
                    achou = 1;
                    break;
                }
                anterior = aux;
                aux = aux->prox;
            }
        }
        if(achou==0){
            printf("O ID %d nao esta presente na lista\n\n", id);
        }
    }
}



int main()
{

    int cont =0;
    setlocale(LC_ALL, "portuguese");

    TipoLista lista;
    TipoItem item;

    criarLista(&lista);

    //printf("\nVazia?\n %d", vazia(lista));

    item.id = 10;
    item.numero = 200;
    inserirFinal(&lista, item);

    item.id = 15;
    item.numero = 209;
    inserirFinal(&lista, item);

    item.id = 17;
    item.numero = 289;
    inserirFinal(&lista, item);

    //item.id = 20;
    //inserirFinal(&lista, item);

    //item.id = 30;
    //inserirFinal(&lista, item);

    imprimir(lista);

    int quantidade = quantElem(lista);
    printf("\nQuantidade: %d\n", quantidade);

    imprimirItem(lista, 17);



    //removerItem(&lista, 209);

    //imprimir(lista);

    //removerItem(&lista, 30);

    //imprimir(lista);

    //removerItem(&lista, 200);





    return 0;
}
