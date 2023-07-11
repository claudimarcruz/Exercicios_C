#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contadorComparacaoSelect = 0;
int contadorTrocaSelect = 0;

unsigned long long int contadorComparacaoInsert=0;
int contadorTrocaInsert = 0;

int contadorComparacaoBubble =0;
int contadorTrocaBubble = 0;

int contadorComparacaoShell =0;
int contadorTrocaShell = 0;

int contadorComparacaoQuick =0;
int contadorTrocaQuick = 0;

int contadorComparacaoHeap =0;
int contadorTrocaHeap= 0;

int contadorComparacaoMerge =0;
int contadorTrocaMerge= 0;





void selectionSort(int a [], int n) {
    int i, j, min, aux;
    for(i= 0 ; i < n - 1 ; i++) {
        min = i;
        for(j=i+1 ; j < n ; j++){
            if(a[j] < a[min]) {
                min = j;

            }

            // comparação
            contadorComparacaoSelect++;
        }


        if(a[min] == a[i]){
            aux = a[min];
            a[min] = a[i];
            a[i] = aux;
        }else{

            aux = a[min];
            a[min] = a[i];
            a[i] = aux;
            contadorTrocaSelect++;

        }




    }


}

//***************************************************************************************

/*
void insertionSort(int v[], int n){
    int i, j, valorAtual;
    int teste = 0;
    for(i=1; i<n; i++){
        valorAtual = v[i];
        j = i - 1;
        // comparacao

        //contadorComparacaoInsert = (i - 1) + (j + i) ;
        while((j >= 0) && (valorAtual < v[j])){


            v[j+1] = v[j];
            j--;


        }
        contadorComparacaoInsert++;
        if(v[j+1] != valorAtual){
            v[j+1] = valorAtual;
            contadorTrocaInsert++;

        }else{
            v[j+1] = valorAtual;

        }




        //contadorComparacaoInsert = contadorComparacaoInsert + i;
    }




}
*/
//=========================================================

void insertionSort(int v[], int n){
//    contadorComparacaoInsert = (int) malloc( p sizeof(int));
    int i, j, valorAtual;
    int k =0;
    unsigned long long int p =0;
    int t =0;
    //contadorComparacaoInsert = (int) malloc( p sizeof(int));

    int teste = 0;

    for(i=1; i<n; i++){
        valorAtual = v[i];
        j = i - 1;



        if((j >= 0) && (valorAtual > v[j])){
                k++;
        }



        while((j >= 0) && (valorAtual < v[j])){

           // printf("\nentrada do vetor: v[j] : %d\n", v[j]);
          //  printf("\nentrada do vetor: v[j -h] : %d\n", v[j+1]);

            v[j+1] = v[j];
            j--;
            k++;
           // printf("\n i: %d / k: %d\n", i, k);
            t = k;



        }

      //  printf("\nSiada de k: %d\n", k);
        if(t > 0){
            if(i > k  ){
                k = k + 1;
            }

          //  printf("if: [%d] [p]:%d + [k]:%d",i, p, k);
            p =  p + k;
          //  printf("== %d\n", p);

        }else{
            //k = k + 1;
          //  printf("\nelse: [%d] [p]: %d + 1",i, p);
            p = p + 1;
          //printf("== %llu\n", p);
        }

        k =0;
        t =0;


        if(v[j+1] != valorAtual){
            v[j+1] = valorAtual;
            contadorTrocaInsert++;




        }else{
            v[j+1] = valorAtual;
           // k++;



        }



       // k++;



    }



     contadorComparacaoInsert = p;

   // contadorComparacaoInsert = (int) malloc( p* sizeof(int));







}


//***************************************************************************************


void bubbleSort(int v[], int n){
    int i, j, x, contTrocas;
    for (i=0; i<n-1; i++){
        contTrocas = 0;
        for (j=0; j<n-1; j++){
            if (v[j] > v[j+1]){
                contadorComparacaoBubble++;
                x = v[j];
                v[j] = v[j+1];
                v[j+1] = x;
                contTrocas++;
                contadorTrocaBubble++;


        }
        if(contTrocas == 0){
            break;
        }
        while(v[j] >= v[j+1]){
            contadorComparacaoBubble++;
        }
    }
    }
}


//***************************************************************************************


void shellSort(int *v, int n) {
    int i , j ,valor;
    int h = 1;
    int k = 0;
    int p = 0;
    while(h < n) {
        h = 3*h+1;
    }
    while (h > 1) {
        h /= 3;
        printf("\n\nH: %d", h);


        for(i=h; i<n; i++) {
            valor = v[i];
            j = i;
            p++;






            while (j >= h && valor < v[j-h]) {
                v[j] = v[j - h];
                j = j - h;
                contadorTrocaShell++;
            }
            v[j] = valor;
            contadorTrocaShell++;

            if(h != 1) {
            k++;
        }




        }




    }

      contadorComparacaoShell = k + p;
     printf("\n\nk: %d", k);
     printf("\n\np: %d", p);






}

//===============



//***************************************************************************************






int particao(int v[], int esq, int dir){
    int pivo, i, j, aux;


    pivo = v[esq];
    i = esq;
    j = dir;
    //printf("\n**********************");
    //printf("\nPIVO: %d\n", pivo);

    while(i<j){
        //printf("\ni++");
        while((v[i] <= pivo) && (i<=dir)){

            //contadorComparacaoQuick++;
            //printf("\ni: %d", i);
            i++;
        }
        if((v[i] >= pivo) && (i<=dir)){
            //contadorComparacaoQuick++;

        }

        //printf("\n\nj--");
        while(v[j] > pivo){

            //contadorComparacaoQuick++;
            //printf("\nj: %d", j);
            j--;
        }
        if((v[j] <= pivo) && ( j == i) ){//*********

            //contadorComparacaoQuick++;

        }


        //printf("\n\naux\n");
        if(i<j){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            //printf("\nvalor j: %d", v[j]);
           // printf("\nvalor i: %d", v[i]);
           // printf("\naux: %d", aux);
            contadorTrocaQuick++;
        }
       // printf("\ntroca pivo\n");
    }

    v[esq] = v[j];
    v[j] = pivo;

    if( pivo != v[esq]){
        contadorTrocaQuick++;
    }
    //printf("\nvalor esq: %d", v[esq]);
    //printf("\nvalor j: %d", v[j]);
    //printf("\npivo: %d", pivo);

    return j;

}

void QuickSort(int v[], int esq, int dir) {

    int pivo;

    if (dir > esq){
        pivo = particao(v, esq, dir);
        QuickSort(v,esq,pivo-1); //metade esquerda
        QuickSort(v,pivo+1,dir); //metade direita


    }

}

//***************************************************************************************


// Programa para refazer/reconstruir a condição de heap
void  refazHeap(int esq, int dir, int v[]){
    int i = esq;
    int j, aux;
    j = (i+1) * 2 - 1;
    aux = v[i];
    while (j <= dir){
        printf("\nenquanto j:%d <= dir:%d", j,dir);
        if (j < dir){
            printf("\n\nse j:%d < dir:%d", j,dir);
            if (v[j] < v[j+1])
            j++;


        }
        printf("\nj: %d",j);
        printf("\n\nse v[j]%d < v[j +1]%d", v[j],v[j+1]);
        if (aux >= v[j])
            break;
           printf("\n\nse aux:%d >= v[j]:%d", aux,v[j]);

        v[i] = v[j];
        i = j;
        j = i * 2 + 1 ;
    }
    v[i] = aux;
    printf("\nv[i]: %d", v[i]);
    printf("\naux: %d", aux);
    printf("\nj: %d",j);
    printf("\n\n**********************************************************");
}





// Programa para construir o heap:
void constroiHeap(int v[], int n){
    int esq;
    esq = n / 2;
    while (esq > 0){
        esq--;
        refazHeap(esq, n, v);
    }
}

//função que implementa o Heapsort
void heapSort(int v[], int n){
    int esq, dir;
    int x;
    constroiHeap(v, n-1); //constroi o heap
    esq = 0;
    dir = n - 1;
    while (dir > 0){ // ordena o vetor
        x = v[0];
        v[0] = v[dir];
        v[dir] = x;
        dir--;
        refazHeap(esq, dir, v);
    }
}

//***************************************************************************************


void merge(int vetor[], int comeco, int meio, int fim) {
    int com1 = comeco, com2 = meio+1, comAux = 0, tam = fim-comeco+1;
    int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));

    while(com1 <= meio && com2 <= fim){
        //printf("\nEnquanto com 1:%d <= meio:%d && com2:%d <= fim:%d", com1, meio, com2, fim);

        if(vetor[com1] < vetor[com2]) {
        //printf("\nSE com 1:%d <= vetor[com2]:%d", vetor[com1], vetor[com2]);
         //printf("\n**********************************************************");
            vetAux[comAux] = vetor[com1];
            com1++;
        } else {
            vetAux[comAux] = vetor[com2];
            com2++;
            contadorTrocaMerge++;

        }
        contadorComparacaoMerge++;
        comAux++;
    }

    //printf("\n\nCOM1: %d", com1);
    //printf("\n\ncomAux: %d", comAux);

    while(com1 <= meio){  //Caso ainda haja elementos na primeira metade
        vetAux[comAux] = vetor[com1];
        //printf("\ncomAux: %d", vetor[comAux]);
        comAux++;
        com1++;
    }

    while(com2 <= fim) {   //Caso ainda haja elementos na segunda metade
        vetAux[comAux] = vetor[com2];
        comAux++;
        com2++;
    }

    for(comAux = comeco; comAux <= fim; comAux++){    //Move os elementos de volta para o vetor original
        vetor[comAux] = vetAux[comAux-comeco];
    }

    free(vetAux);
}

//***************************************************************************************

void MergeSort(int vetor[], int comeco, int fim){
    if (comeco < fim) {
        int meio = (fim+comeco)/2;
        //printf("\nmeio: %d", meio);
        MergeSort(vetor, comeco, meio);
        printf("\nmeio: %d", meio);
        MergeSort(vetor, meio+1, fim);
        merge(vetor, comeco, meio, fim);
    }
}


//***************************************************************************************

void imprime(int v[], int n) {
    int i;
    for(i=0; i<n; i++){
        printf("[%d] ", v[i]);
    }
}


//***************************************************************************************



int main()
{

    srand(time(NULL));
    int tamanho = 10000;
    int v[tamanho], i;



    for(i = 0 ; i < tamanho; i++) {
        v[i] = rand()%500;
    }



/*
    v[0] = 3;
    v[1] = 2;
    v[2] = 5;
    v[3] = 30;
    v[4] = 14;
    v[5] = 22;
    v[6] = 1;
    v[7] = 6;
    //15c 5t shell
*/
/*
    v[0] = 9;
    v[1] = 8;
    v[2] = 7;
    v[3] = 6;
    v[4] = 5;
    v[5] = 4;
    v[6] = 3;
    v[7] = 2;
    v[8] = 1;
    //21c 10t
*/
/*
    v[0] = 21;
    v[1] = 7;
    v[2] = 18;
    v[3] = 13;
    v[4] = 0;
    v[5] = 3;
    v[6] = 69;
    v[7] = 35;
    v[8] = 1;
    //36c 6t quick
*/

/*
    v[0] = 7;
    v[1] = 3;
    v[2] = 5;
    v[3] = 8;
    v[4] = 9;
*/
/*
    v[0] = 7;
    v[1] = 2;
    v[2] = 13;
    v[3] = 8;
    v[4] = 1;
    v[5] = 10;
    v[6] = 25;
    //heap 21c  13t
*/
/*

    v[0] = 75;
    v[1] = 63;
    v[2] = 7;
    v[3] = 84;
    v[4] = 3;
    v[5] = 2;
    v[6] = 4;
    v[7] = 0;
    v[8] = 9;
    //merge 18c  9t
*/
/*
        v[0] = 58;
 		v[1] = 47;
 		v[2] = 51;
 		v[3] = 20;
 		v[4] = 2;
 		v[5] = 45;
 		v[6] = 4;
 		v[7] = 66;
 		//merge 17c 8t
*/
 		/*
 		v[0] = 36;
 		v[1] = 59;
 		v[2] = 58;
 		v[3] = 55;
 		v[4] = 46;
 		v[5] = 1;
 		v[6] = 38;
 		v[7] = 1;
 		//merge 15c 11t

*/


    printf("Vetor desordenado:\n");

   // imprime(v,tamanho);

   //selectionSort(v, tamanho);
    //insertionSort(v, tamanho);


    //bubbleSort(v, tamanho);





    //shellSort(v, tamanho);
    //15c 5t

   //QuickSort(v, 0, tamanho-1);

    //heapSort(v, tamanho);

   MergeSort(v, 0 , tamanho-1);

    printf("\n\n Vetor ordenado: \n");

    //imprime(v, tamanho);

     //printf("\ncontador de comparacao: %d\n", contadorComparacaoSelect);
     //printf("\ncontador de trocas: %d\n", contadorTrocaSelect);

    //printf("\ncontador de comparação: %llu", contadorComparacaoInsert);
    //printf("\ncontador de trocas: %d", contadorTrocaInsert);

     //printf("\ncontador de comparação: %d", contadorComparacaoBubble);
     //printf("\ncontador de trocas: %d", contadorTrocaBubble);

     //printf("\ncontador de comparação: %d", contadorComparacaoShell);
     //printf("\ncontador de trocas: %d", contadorTrocaShell);

     //printf("\ncontador de comparação: %d", contadorComparacaoQuick);
     //printf("\ncontador de trocas: %d", contadorTrocaQuick);

     //printf("\ncontador de comparação: %d", contadorComparacaoHeap);
     //printf("\ncontador de trocas: %d", contadorTrocaHeap);

     printf("\ncontador de comparação: %d", contadorComparacaoMerge);
     printf("\ncontador de trocas: %d", contadorTrocaMerge);




    return 0;
}
