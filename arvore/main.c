/* www.GeeksBR.com */

/* Implementa��o de �rvore bin�ria */

#include <stdio.h>
#include <stdlib.h>

/* Cada n� armazena tr�s informa��es:
   nesse caso um n�mero (num),
   ponteiro para sub�rvore � direita (sad)
   e ponteiro para sub�rvore � esquerda (sae).*/
typedef struct tree{
    int num;
    struct tree* sad;
    struct tree* sae;
}Tree;

/* A estrutura da �rvore � representada por um ponteiro
   para o n� raiz. Com esse ponteiro, temos acesso aos
   demais n�s. */

/* Fun��o que cria uma �rvore */
Tree* createTree(){
    /* Uma �rvore � representada pelo endere�o do n� raiz,
     essa fun��o cria uma �rvore com nenhum elemento,
     ou seja, cria uma �rvore vazia, por isso retorna NULL. */
    return NULL;
}

/* Fun��o que verifica se uma �rvore � vazia */
int treeIsEmpty(Tree* t){
    /* Retorna 1 se a �rvore for vazia e 0 caso contr�rio */
    return t == NULL;
}

/* Fun��o que mostra a informa��o da �rvore */
void showTree(Tree* t){
    /* Essa fun��o imprime os elementos de forma recursiva */

    if(!treeIsEmpty(t)){ /* se a �rvore n�o for vazia... */
        /* Mostra os elementos em pr�-ordem */
        showTree(t->sae); /* mostra a sae (sub�rvore � esquerda) */
        printf("<%d> ", t->num); /* mostra a raiz */
        showTree(t->sad); /* mostra a sad (sub�rvore � direita) */
    }
}


/* Fun��o que insere um dado na �rvore */
void insertTree(Tree** t, int num){
    /* Essa fun��o insere os elementos de forma recursiva */
    if(*t == NULL){
        *t = (Tree*)malloc(sizeof(Tree)); /* Aloca mem�ria para a estrutura */
        (*t)->sae = NULL; /* Sub�rvore � esquerda � NULL */
        (*t)->sad = NULL; /* Sub�rvore � direita � NULL */
        (*t)->num = num; /* Armazena a informa��o */
    } else {
        if(num < (*t)->num){ /* Se o n�mero for menor ent�o vai pra esquerda */
            /* Percorre pela sub�rvore � esquerda */
            insertTree(&(*t)->sae, num);
        }
        if(num > (*t)->num){ /* Se o n�mero for maior ent�o vai pra direita */
            /* Percorre pela sub�rvore � direita */
            insertTree(&(*t)->sad, num);
        }
    }
}

/* Fun��o que verifica se um elemento pertence ou n�o � �rvore */
Tree* busca(Tree* t, int k) {

    if (t == NULL || t->num == k)
        return t;
    if (t->num > k)
        return busca(t->sae, k);
    else
        return busca(t->sad, k);
}

int main(){

    Tree* t = createTree(); /* cria uma �rvore */

    insertTree(&t, 12); /* insere o elemento 12 na �rvore */
    insertTree(&t, 15); /* insere o elemento 15 na �rvore */
    insertTree(&t, 10); /* insere o elemento 10 na �rvore */
    insertTree(&t, 13); /* insere o elemento 13 na �rvore */
    insertTree(&t, 20); /* insere o elemento 20 na �rvore */
    insertTree(&t, 2); /* insere o elemento 2 na �rvore */
    insertTree(&t, 4); /* insere o elemento 4 na �rvore */
    insertTree(&t, 70); /* insere o elemento 70 na �rvore */
    insertTree(&t, 55); /* insere o elemento 55 na �rvore */
    insertTree(&t, 9); /* insere o elemento 9 na �rvore */

    showTree(t); /* Mostra os elementos da �rvore em pr�-ordem */

    if(treeIsEmpty(t)){ /* Verifica se a �rvore est� vazia */
        printf("\n\nArvore vazia!!\n");
    }else{
        printf("\n\nArvore NAO vazia!!\n");
    }

    if(busca(t, 15)!=NULL) { /* Verifica se o n�mero 15 pertence a �rvore */
        printf("\nO numero 15 pertence a arvore!\n");
    }else{
        printf("\nO numero 15 NAO pertence a arvore!\n");
    }

    if(busca(t, 22)!=NULL) { /* Verifica se o n�mero 22 pertence a �rvore */
        printf("\nO numero 22 pertence a arvore!\n\n");
    }else{
        printf("\nO numero 22 NAO pertence a arvore!\n\n");
    }

    free(t); /* Libera a mem�ria alocada pela estrutura �rvore */

    return 0;
}
