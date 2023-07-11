#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>


typedef struct{

    int codigo;
    char nomeVeiculo[50];
    int categoria;
    float preco;
    int estoque;

}TipoItem;


typedef struct celula_struct *apontador;


typedef struct celula_struct{

    TipoItem item;
    apontador prox;

}celula;


typedef struct {

    apontador primeiro, ultimo;

}TipoLista;




void criarLista(TipoLista *lista){
    lista->primeiro = (apontador) malloc(sizeof(celula));
    lista->primeiro->prox = NULL;
    lista->ultimo = lista->primeiro;
}


int vazia(TipoLista lista){


    if(lista.primeiro == lista.ultimo){
        return 1;
    }else{
        return 0;
    }
}
void imprimirCarro(TipoLista lista, int categoria) {
    if(vazia(lista)) {
        printf("\nLista vazia!!");
    } else{
        int achou = 0;
        apontador aux = lista.primeiro->prox;
        while(aux != NULL) {
            if(aux->item.categoria == categoria) {
            printf("===Impressao dos Carros===\n");
             printf("\n - Codigo: %d\n - Nome: %s - Preco de compra: R$ %.2f\n - Quantidade no estoque(Un): %d\n - Valor do estoque: R$ %.2f\n - Categoria: %d\n ---------------------------------\n" , aux->item.codigo, aux->item.nomeVeiculo, aux->item.preco, aux->item.estoque,(aux->item.preco * aux->item.estoque), aux->item.categoria);
            printf("\n");
            achou = 1;
            //break;

        }
         aux = aux->prox;
        }
        if(achou==0) {
            printf("Nenhum item foi localizado com o id informado\n");
        }
    }

}


void inserirCarro(TipoLista *lista, TipoItem item){
        lista->ultimo->prox = (apontador) malloc(sizeof(celula));
        lista->ultimo = lista->ultimo->prox;
        lista->ultimo->prox = NULL;
        lista->ultimo->item = item;

}


void imprimir(TipoLista lista){


    if(vazia(lista)){
        printf("\nA lista está vazia\n");
    }else{

        apontador aux = lista.primeiro->prox;

        printf("\n= Carros =\n");

        while(aux != NULL){
            printf("\n - Código: %d\n - Nome: %s - Preço de compra: R$ %.2f\n - Quantidade no estoque(Un): %d\n - Valor do estoque: R$ %.2f\n - Categoria: %d\n --\n" , aux->item.codigo, aux->item.nomeVeiculo, aux->item.preco, aux->item.estoque,(aux->item.preco * aux->item.estoque), aux->item.categoria);
            aux = aux->prox;
        }
    }

    printf("\n");
}


int buscar(TipoLista lista, int codigo){
    apontador aux = lista.primeiro->prox;
        while(aux != NULL){
            if(aux->item.codigo == codigo){
                return 1;
            }
            aux = aux->prox;
        }
        return 0;
    }



void valorEstoque(TipoLista lista) {
    float soma;
    float somaFinal;
    apontador aux = lista.primeiro->prox;
    while(aux != NULL) {
        soma = (aux->item.preco * aux->item.estoque);
        aux= aux->prox;
        somaFinal += soma;
    }
    printf("\nValor do Estoque Total: R$ %.2f\n", somaFinal);

}




int main()
{

    setlocale(LC_ALL, "portuguese");
    int j =1;
    int categoria;

    TipoLista lista;
    TipoItem item;

    criarLista(&lista);



    while(j != 0){
        printf("\n=\n");
        printf("\n[1] - Inserir Carro\n");
        printf("\n[2] - Calcular valor total do estoque\n");
        printf("\n[3] - Imprimir Carros\n");
        printf("\n[4] - Sair\n");
        printf("\n=\n");
        scanf("%d", &j);




        switch(j){

        case 1:

            printf("\nCodigo Carro:\n");
            scanf("%d",&item.codigo);

            if(buscar(lista, item.codigo) == 1){
                    printf("\nCodigo fornecido ja existente!\n");
                break;
            }else{


                fflush(stdin);
                printf("\nNome do Carro:\n");
                fgets(item.nomeVeiculo, 50, stdin);
                printf("\nPreco de compra:\n");
                scanf("%f", &item.preco);
                printf("\nQuantidade do estoque:\n");
                scanf("%d",&item.estoque);
                printf("\nCategoria:\n");
                scanf("%d",&item.categoria);
                inserirCarro(&lista, item);
                break;
            }


        case 2:
            valorEstoque(lista);

            break;

        case 3:

             printf("\nInforme a Categoria:\n");
             scanf("%d",&categoria);
            imprimirCarro(lista, categoria );
            break;

        case 4:
                break;

        default:
            printf("\nNumero informado nao correspondente! - Informe novamente!");
            break;


        }
    }


    printf("\n============= Obrigado :) ======================\n");


    return 0;


}

/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanho 10

typedef struct {

    int categoria;
    int codigo;
    float preco;


}TipoItem;


typedef struct{

    TipoItem itens[tamanho];
    int inicio, fim;


}TipoLista;



void criarLista(TipoLista *lista){

    lista->inicio =0;
    lista->fim =0;



}



int vazia(TipoLista lista){

    if(lista.inicio == lista.fim){
        return 1;
    }else{

        return 0;
    }


}


void inserir(TipoLista *lista, TipoItem item){

    if(lista->fim > tamanho){
        printf("\nlista cheia\n");
    }else{

        lista->itens[lista->fim] = item;
        lista->fim++;

    }


}


void imprimir(TipoLista lista, int d){

    int i;

    for(i = lista.inicio; i< lista.fim;i++){
            if(lista.itens[i].codigo == d){
                printf("\n Catgoria -%d\n", lista.itens[i].codigo);
                printf("\n Codigo -%d\n", lista.itens[i].categoria);
                printf("\n Preco - R$ %f\n", lista.itens[i].preco);

                printf("-----------------------\n");
        }else{
            printf("nao presente");
        }
    }

}


void estoque(TipoLista lista){
    float soma;
    int i =0;
    for(i=0;i<lista.fim;i++){
        soma = soma + lista.itens[i].preco;
    }


    printf("Preco de estoque: %f", soma);



}


void remover(TipoLista *lista, int pos){

    int i;

    if(vazia(*lista) ==1){
        printf("\nlista vazia\n");
    }else if(pos >= lista->fim){
        printf("\noperacao invalida\n");


    }else{
        for(i =pos;i<lista->fim;i++){
            lista->itens[i] = lista->itens[i +1];
        }

        lista->fim--;


    }






}



int main()
{
    int j;
    int l =0;;
    int k =0;
    int i=0;
    int cat =0;
    TipoLista lista;
    TipoItem item;
    criarLista(&lista);



    while(j != 5){
        printf("\n-----------------------------------------\n");
        printf("\n[1] Gerar carro:\n");
     //   scanf("%d", &j);
        printf("\n[2] Gerar valor\n");
     //   scanf("%d", &j);
        printf("\n[3] Gerar dados da categoria\n");
      //  scanf("%d", &j);
        printf("\n[4] Sair\n");
     //   scanf("%d", &j);

        printf("\n-----------------------------------------\n");
        scanf("%d", &j);














        switch(j){

        case 1:
          //  filanormal();
            printf("\ninforme a categoria: [1,2,3,4]\n");
            scanf("%d", &l);
            item.categoria = i++;
            item.codigo = l;
            item.preco = 40000 * l;
            inserir(&lista, item);
            break;

        case 2:
            estoque(lista);
            break;

        case 3:
            printf("\ninforme a catgoria:\n");
            scanf("%d", &cat);
            imprimir(lista, cat);


            break;



        case 4:
            printf("\n-----------Obrigado 😉 ---------------\n");
            break;

        default:
            printf("\nnumero informado não corresponde! Tente novamente\n");
        }

    }

    return 0;
}
*/
