#include <stdio.h>
#include <stdlib.h>

typedef struct item {
    int id;
    struct item *prox;
}node;

void criarPilha(node *pilha){
    pilha->prox = NULL;
}

int vazia(node pilha) {
    if(pilha.prox == NULL){
        return 1;
    }else {
        return 0;
    }
}

void push(node *pilha, int id){
    node *novo = (node*)malloc(sizeof(node));
    if(novo == NULL){
        printf("Sem memoria disponivel");
    }else{
        novo->id = id;
        novo->prox = NULL;
        if(vazia(*pilha) == 1){
            pilha->prox = novo;
        }else {
            node *aux = pilha->prox;
            while(aux->prox != NULL){
            aux = aux->prox;
            }
            aux->prox = novo;
        }
    }
}

node* pop(node *pilha) {
    if(vazia(*pilha)==1) {
        printf("A pilha esta vazia");
    }else {
        node *ultimo = pilha->prox;
        node *penultimo = pilha;
        while(ultimo->prox != NULL) {
            penultimo = ultimo;
            ultimo = ultimo->prox;
        }
        penultimo->prox = NULL;
        return ultimo;
    }
}

void imprimir(node pilha){
    if(vazia(pilha)== 1) {
        printf("A pilha esta vazia");
    }else {
        node *aux = pilha.prox;
        printf("Elementos da Pilha:\n");
        while( aux != NULL) {
            printf("%d\n", aux->id);
            aux = aux->prox;
        }

        printf("\n");
    }
}

int quantElem(node pilha){
    int cont =0;
    if(vazia(pilha)== 1) {
        printf("A pilha esta vazia");
    }else {
        node *aux = pilha.prox;
        while( aux != NULL) {
            cont++;
            aux = aux->prox;
        }
        return cont;
        printf("\n");
    }
}

void imprimirContra(node pilha){
    int cont = quantElem(pilha);
    if(vazia(pilha)== 1) {
        printf("A pilha esta vazia");
    }else {

        node pilhaAux;
        criarPilha(&pilhaAux);

        do{
            node *retirado = pop(&pilha);
            push(&pilhaAux, retirado->id);
            cont--;
        }while(cont > 0);

        node *aux = pilhaAux.prox;

        printf("Elementos da Pilha na ordem de retirada:\n");
        while(aux != NULL) {
           printf("%d\n", aux->id);
            aux = aux->prox;
        }

        printf("\n");
    }
}






void zerar(node *pilha){
    if(vazia(*pilha) == 0){
        node *prox, *atual;
        atual = pilha->prox;

        while(atual != NULL){
            prox = atual->prox;
            free(atual);
            atual = prox;
        }

        criarPilha(pilha);


    }
}


int main()
{

    node pilha;

    criarPilha(&pilha);

    push(&pilha, 1);
    push(&pilha, 2);
    push(&pilha, 3);
    push(&pilha, 4);
    push(&pilha, 5);

    imprimir(pilha);

    int quantidade1 = quantElem(pilha);
    printf("\nQuantidade: %d\n\n", quantidade1);



    //node *retirado = pop(&pilha);

    //printf("\nElemento retirado: %d\n\n", retirado->id);

    //zerar(&pilha);


    //imprimir(pilha);

    //int quantidade = quantElem(pilha);
    //printf("\nQuantidade: %d\n\n", quantidade);

    imprimirContra(pilha);






    return 0;
}
