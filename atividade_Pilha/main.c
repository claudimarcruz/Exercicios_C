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
        //return NULL;
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
        while( aux != NULL) {
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

int quantElemento(node pilha){
    int contador = 0;
    if(vazia(pilha)== 1) {
        printf("A pilha esta vazia");
    }else {
        node *aux = pilha.prox;
        while( aux != NULL) {
            contador++;
            aux = aux->prox;
        }

        return contador;

    }
}
/*
void zerarAux(node *pilha) {

    if(vazia(*pilha) == 0){
        node *prox, *atual;
        atual = pilha->prox;

        while(atual != NULL){
            prox = atual->prox;
            free(atual);
            atual = prox;
        }

    }
}
*/

node inverterPilha(node *pilha){

    int i = quantElemento(*pilha);

    node pilhaAux;

    criarPilha(&pilhaAux);

    int j = i;

     do{

        node *retirado = pop(pilha);
        push(&pilhaAux, retirado->id);
        j--;
    } while(j > 0);


    return pilhaAux;

    //zerarAux(&pilhaAux);

}
/*
node inverterPilha(node *pilha) {
    node pilhaAux;
    criarPilha(&pilhaAux);

    if(vazia(*pilha)==1) {
        printf("A pilha est� vazia");
    }else{
        node *retirado = pop(pilha);
        while(retirado != NULL) {
            push(&pilhaAux, retirado->id);
            free(retirado);
            retirado = pop(pilha);
        }
    }
    return pilhaAux;
}

*/

int main()
{


    node pilha;

    criarPilha(&pilha);

    node pilhaAux;

    criarPilha(&pilhaAux);

    push(&pilha, 10);
    push(&pilha, 20);
    push(&pilha, 30);
    push(&pilha, 40);
    push(&pilha, 50);
    push(&pilha, 60);
    push(&pilha, 70);

    printf("\nPilha original\n\n");
    imprimir(pilha);

    int quantidade = quantElemento(pilha);

    printf("\nQuantidade: %d\n\n", quantidade);

    pilha = inverterPilha(&pilha);

    printf("\n****************\n");

    printf("\nPilha invertida\n\n");
    imprimir(pilha);

    return 0;
}


