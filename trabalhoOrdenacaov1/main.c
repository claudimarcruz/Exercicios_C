
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contadorComparacaoSelect = 0;
int contadorTrocaSelect = 0;


//int qtd_elementos = 999999999;

//int contadorComparacaoInsert =0;
//contadorComparacaoInsert = (int*) (malloc( qtd_elementos * sizeof(int)));

unsigned long int contadorComparacaoInsert = 0;


//

int contadorTrocaInsert = 0;


int contadorComparacaoShell =0;
int contadorTrocaShell =0;

int contadorComparacaoBubble = 0;
unsigned long long int contadorTrocaBubble = 0;

int contadorComparacaoQuick = 0;
int contadorTrocaQuick =0;

int contadorComparacaoHeap =0;
int contadorTrocaHeap = 0;

int contadorComparacaoMerge = 0;
int contadorTrocaMerge =0;



void original(int vetor[], int tamVetor, int r) {
    int i;
    srand(time(NULL));

    for(i=0 ; i < tamVetor ; i++){
        vetor[i] = rand()%r;
    }

}



void selectionSort(int a [], int n) {
    int i, j, min, aux;
    for(i= 0 ; i < n - 1 ; i++) {
        min = i;
        for(j=i+1 ; j < n ; j++){
            if(a[j] < a[min]) {
                min = j;

            }

            // compara��o
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




void insertionSort(int v[], int n){
    //contadorComparacaoInsert = (int*) malloc( qtd_elementos* sizeof(int));
   //printf("\n contINS:%d",contadorComparacaoInsert);
    int i, j, valorAtual;
    int k =0;
    //int p =0;
    unsigned  long int p = 0;
    int t =0;
    //p = (int*) malloc( qtd_elementos * sizeof(int));

    int teste = 0;

    for(i=1; i<n; i++){
        valorAtual = v[i];
        j = i - 1;

        /*

        if((j >= 0) && (valorAtual > v[j])){
                k++;
        }

        */

        while((j >= 0) && (valorAtual < v[j])){

          //  printf("\nentrada do vetor: v[j] : %d\n", v[j]);
           // printf("\nentrada do vetor: v[j -h] : %d\n", v[j+1]);

            v[j+1] = v[j];
            j--;
            k++;
          //  printf("\n i: %d / k: %d\n", i, k);
            t = k;



        }

       // printf("\nSiada de k: %d\n", k);
        if(t > 0){
            if(i > k  ){
                k = k + 1;
            }

         //   printf("if: [%d] [p]:%d + [k]:%d",i, p, k);
            p =  p + k;
           // printf("\n p = %d", p);
           // printf("== %d\n", p);

        }else{
            //k = k + 1;
           // printf("\nelse: [%d] [p]: %d + 1",i, p);
            p = p + 1;
          //  printf("== %d\n", p);
          //  printf(" \np = %d", p);
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

   // contadorComparacaoInsert = (int*) malloc( p* sizeof(int));

}


void bubbleSort(int v[], int n){
    int i, j,contTrocas;
    int x =0;
    for (i=0; i<n-1; i++){
        contTrocas = 0;
        for (j=0; j<n-1; j++){
            //printf("\no numero v[j] = %d eh maior que v[j + 1] = %d?\n", v[j], v[j+ 1]);
            if (v[j] > v[j+1]){ // comparacao
              //  printf("\nentao faca:\n");
              //  printf("\n x = v[j] / %d = %d\n", x, v[j]);
                x = v[j];


              //  printf("\n v[j] = v[j + 1]/ %d = %d\n", v[j], v[j+1]);
                v[j] = v[j+1];


              //  printf("\n v[j + 1] = x / %d = %d\n", v[j+1], x);
                v[j+1] = x;

                contadorComparacaoBubble++;
                contadorTrocaBubble++;

                contTrocas++;
              //  printf("\nconttrocas com i = %d : %d", i, contadorTrocaBubble);
              //  printf("\ncomparacao com i = %d : %d", i, contadorComparacaoBubble);
                // trocas


            }else{

              //  printf("\no numero %d nao eh maior que %d\n", v[j], v[j+1]);

                contadorComparacaoBubble++;

               // printf("\ncomparacoes: %d\n", contadorComparacaoBubble);

            }
        }
        //contadorComparacaoBubble++;
        if(contTrocas == 0){
           // contadorComparacaoBubble;
            break;
        }

       // contadorComparacaoBubble++;
    }
}




void shellSort(int *v, int n) {

    int i , j , valor;
    int h = 1;
    int p = 0;
    int k =0;
    int t = 0;
    int teste = 0;
    int a,b =0;
    while(h < n) {
        h = 3*h+1;

    }
    while (h > 1) {
        h /= 3;
         //printf("\nh: %d\n", h);

        for(i=h; i<n; i++) {
            teste++;
            valor = v[i];
            j = i;

            while (j >= h && valor < v[j-h]) { // comparacao
               // printf("\nentrada do vetor: v[j] : %d\n", v[j]);
              //  printf("\nentrada do vetor: v[j -h] : %d\n", v[j -h]);
                v[j] = v[j - h];
                j = j - h;
                k++;
                t = k;

            }
        if( h == 1){

            if(t > 0){
                if(i> k){
                    k = k + 1;
                }
               // printf(" if k: %d --- %d + %d ---",k, p ,i);
                p  = p + k;
                //a = p;
               // printf(" --- / p: %d ----\n",p);

            }else{
               // printf(" else k: %d --- %d + 1 ---",k, p);
                p =  p + 1;
                //b = p;
              //  printf(" ---  /  p: %d ----\n",p);

            }

            k =0;
            t =0;

        }else{
            p =  p + 1;
            k =0;
            t =0;


        }




            if(valor != v[j] ){
                v[j] = valor;
                contadorTrocaShell++;
               //k++;
            }else{

                v[j] = valor;


            }




        }









    }


    contadorComparacaoShell =   p;


}




void imprime(int v[], int n) {
    int i;
    for(i=0; i<n; i++){
        printf("[%d] ", v[i]);
    }
}





int particao(int v[], int esq, int dir){
    int pivo, i, j, aux;

   // printf("pivo: %d\ni= %d\nj = %d", v[esq], esq, dir );
    pivo = v[esq];
    i = esq;
    j = dir;

   // printf("\nenquanto [i] = %d for menor que [j] = %d faca:", i,j);

    while(i<j){
        //printf("\nenquanto v[i] <= %d < pivo = %d e [i]:%d <= dir: %d, faca:", v[i],pivo, i, dir);
        while((v[i] <= pivo) && (i<=dir)){
         //   printf("\nv[i] <= %d < pivo = %d e [i]:%d <= dir: %d?\n",v[i], pivo, i, dir);
            contadorComparacaoQuick++;
          //  printf("\ncompara��o: %d\n", contadorComparacaoQuick);
            i++;
         //   printf("\ni = %d\n", i);
         //   printf("\nv[i] <= %d < pivo = %d e [i]:%d <= dir: %d?\n",v[i], pivo, i, dir);
        }
        if((v[i] > pivo)&& (i<=dir)){
          //  printf("\nFINISH WHILE V[i] = %d eh maior que pivo = %d\n", v[i], pivo);

            contadorComparacaoQuick++;
          //  printf("\ncompara��o: %d\n", contadorComparacaoQuick);
        }


      //  printf("enquanto v[j]: %d > pivo: %d faca:", v[j], pivo);

        while(v[j] > pivo){
           // printf("\nv[j]:%d > pivo = %d?\n",v[j], pivo);
            j--;
            contadorComparacaoQuick++;
          //  printf("\ncompara��o: %d\n", contadorComparacaoQuick);
          //  printf("\nj--: %d\n", j);
           // printf("\nv[j]:%d > pivo = %d?\n",v[j], pivo);
        }

        if((v[j] <= pivo) && (i<=j)){
         // printf("\nFINISH WHILE V[J] = %d eh Maior que pivo = %d\n", v[j], pivo);
          contadorComparacaoQuick++;
         // printf("\ncompara��o: %d\n", contadorComparacaoQuick);
        }



       // printf("\nse i:[%d] < j:[%d] faca:", i,j);
        if(i<j){
           // printf("\naux = %d\nv[i] = %d\nv[j] = %d", v[i], v[j], aux);
          //  printf("\naux = v[i]: %d", v[i]);
            aux = v[i];
            v[i] = v[j];
          //  printf("\nv[i] = v[j]:%d", v[j]);
            v[j] = aux;
           // printf("\nv[j] = aux: %d", aux);
            contadorTrocaQuick++;
           // printf("\ntrocas: %d\n", contadorTrocaQuick);
        }

        //contadorTrocaQuick++;
    }

    //contadorComparacaoQuick++;
    if(v[esq] != v[j]){
       // printf("\nv[esq] = v[j]: %d", v[j]);
        v[esq] = v[j];

        v[j] = pivo;
        printf("\nv[j] = pivo:%d", pivo);
        contadorTrocaQuick++;
       // printf("\ntrocas: %d\n", contadorTrocaQuick);
        return j;

    }else{
        v[esq] = v[j];
        v[j] = pivo;
       // contadorTrocaQuick++;
        return j;
    }

}

void QuickSort(int v[], int esq, int dir) {

    int pivo;

    //printf("\no i(esq): %d eh menor que j(dir): %d?\n", esq, dir);

    if (dir > esq){
       // printf("\nentao fa�a:\n");
        pivo = particao(v, esq, dir);
        QuickSort(v,esq,pivo-1); //metade esquerda
        QuickSort(v,pivo+1,dir); //metade direita
    }else{

        //printf("\nnao eh maior");

    }

}





// Programa para refazer/reconstruir a condi��o de heap
void  refazHeap(int esq, int dir, int v[]){
    int i = esq;
   // printf("\ni = esq == %d", i);
    int j, aux;
    j = (i+1) * 2 - 1;
 //   printf("\nj= (%d + 1) * 2 - 1", i);
 //   printf("\nj=%d", j);
    aux = v[i];
 //  printf("\naux = v[i] == %d\n", v[i]);


    while (j <= dir){
    //    printf("\nenquanto j==%d for <= dir==%d\n",j, dir );

        if (j < dir){
     //       printf("\nj==%d eh menor que dir==%d?", j,dir);
     //       printf("\nv[j]:%d eh menor que v[j+1]:%d?\n", v[j], v[j+1]);
            if (v[j] < v[j+1]){
                 j++;
       //         printf("j = %d", j);
                contadorComparacaoHeap++;
        //        printf("\neh menor e comparou: %d", contadorComparacaoHeap);
            }else{

                contadorComparacaoHeap++;
        //        printf("\nnao eh menor e comparou: %d", contadorComparacaoHeap);

            }
         //   printf("\nsimm");

        }

      //  printf("\naux == %d eh maior ou igual a v[j]: %d? se for eh break\n", aux, v[j]);
        if (aux >= v[j]){
            contadorComparacaoHeap++;
         //   printf("\neh maior e comparou: %d", contadorComparacaoHeap);
            break;
        }else{
            contadorComparacaoHeap++;
         //   printf("\nnao eh maior e comparou %d", contadorComparacaoHeap);
            v[i] = v[j];
          //  contadorTrocaHeap++;
          //  printf("\ntroca feita: %d", contadorTrocaHeap);

         //   printf("\nv[i] = v[j]: %d", v[j]);
            i = j;
         //   printf("\ni = j:%d",j);
            j = i * 2 +1;
         //   printf("\nj=  %d  * 2 + 1", i);
            //contadorTrocaHeap++;

        }
        //    printf("\nparouu");



    }
    if(v[i] != aux){
        v[i] = aux;
        contadorTrocaHeap++;
      //  printf("\nv[i] = aux:%d\n", aux);
      //  printf("\ntroca feita: %d", contadorTrocaHeap);

    }else{

        v[i] = aux;
       // printf("\nv[i] = aux:%d\n", aux);



    }

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

//fun��o que implementa o Heapsort
void heapSort(int v[], int n){
   // printf("\n---funcao heapsort ---\n");
    int esq, dir;
    int x;
    constroiHeap(v, n-1); //constroi o heap
    esq = 0;
    dir = n - 1;
    while (dir > 0){// ordena o vetor
        contadorTrocaHeap++;
       // printf("\n-----------\n");
        x = v[0];
       // printf("\nx = v[0]:%d", v[0]);
        v[0] = v[dir];
       // printf("\nv[0] = v[dir]:%d", v[dir]);
        v[dir] = x;
      //  printf("\nv[dir] = x %d\n", x);
      //  printf("\ntroca feita: %d", contadorTrocaHeap);
        dir--;
        refazHeap(esq, dir, v);
    }
}



void merge(int vetor[], int comeco, int meio, int fim) {
    int com1 = comeco, com2 = meio+1, comAux = 0, tam = fim-comeco+1;
    int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));
  //  printf("\ncom1 = comeco: %d", comeco);
  //  printf("\ncom2 = meio+1: %d", meio);
   // printf("\ncomAux = 0");
   // printf("\ntam = fim:%d-comeco:%d+1 == %d\n",fim, comeco, fim-comeco+1);
    while(com1 <= meio && com2 <= fim){
       // printf("\nenquanto com1: %d <= meio: %d e com2: %d <= fim:%d, faca:",com1, meio, com2, fim);

        //printf("\nvetor[com1:%d]: %d, eh menor que vetor[com2:%d]:%d?",com1, vetor[com1], com2, vetor[com2]);
        if(vetor[com1] < vetor[com2]) {
          //  printf("\neh menor:");
            vetAux[comAux] = vetor[com1];
         //   printf("\nvetAux[comAux:%d]:%d = vetor[com1:%d]", comAux, vetAux[comAux], com1, vetor[com1]);
            com1++;
          //  printf("\ncom1 = %d", com1);
        } else {
          //  printf("\nnao eh menor:");
            vetAux[comAux] = vetor[com2];
          //  printf("\nvetAux[comAux:%d]:%d = vetor[com2:%d]:%d",comAux, vetAux[comAux], com2, vetor[com2]);
            com2++;
          //  printf("\ncom2 = %d ", com2);
            contadorTrocaMerge++;
           // printf("\ncontador de trocas: %d",contadorTrocaMerge);
        }
        contadorComparacaoMerge++;
       // printf("\ncomparou: %d", contadorComparacaoMerge);
        comAux++;
       // printf("\ncontador comAux = %d\n", comAux);
    }


  //  printf("\ntem elementos na primeira metade? enquanto tiver faca enquanto com1:%d <= meio:%d", com1, meio);
    while(com1 <= meio){  //Caso ainda haja elementos na primeira metade
       // printf("\nsim");
        vetAux[comAux] = vetor[com1];
       // printf("\nvetAux[comAux:%d]:%d = vetor[com1:%d]:%d", comAux, vetor[comAux], com1, vetor[com1]);
        //printf("")
        comAux++;
      //  printf("\n comAux = %d", comAux);
        com1++;
        //printf("\ncom1 = %d", com1);
    }


    //printf("\ntem elementos na segunda metade? enquanto tiver faca enquanto com2:%d <= fim:%d", com2, fim);

    while(com2 <= fim) {   //Caso ainda haja elementos na segunda metade
       // printf("\nsimm");
        vetAux[comAux] = vetor[com2];
       // printf("\nvetAux[comAux:%d]:%d = vetor[com2:%d]:d", comAux, vetor[comAux], com2, vetor[com2]);
        comAux++;
        //printf("\n comAux = %d", comAux);
        com2++;
       // printf("\ncom2 = %d", com2);
    }
   // printf("\nmovendo os elementos de volta para o vetor original:");
    for(comAux = comeco; comAux <= fim; comAux++){    //Move os elementos de volta para o vetor original
        vetor[comAux] = vetAux[comAux-comeco];
        //printf("\nvetor[comAux%d]:%d = vetAux[comAux:%d - comec0:%d]:%d", comAux, vetor[comAux], comAux, comeco, vetAux[comAux - comeco]);
    }



    free(vetAux);
    //printf("\nliberou a memoria do vetAux");
}

void MergeSort(int vetor[], int comeco, int fim){
    if (comeco < fim) {
        int meio = (fim+comeco)/2;

        MergeSort(vetor, comeco, meio);
        MergeSort(vetor, meio+1, fim);
        merge(vetor, comeco, meio, fim);
    }
}




int main()
{
    int opcao;
    /*
    do{
        printf("[1] para testes com 100 elementos");
        printf("[5] SAIR");
        scanf("%d", opcao);





    }while(opcao!=5);
    */
   // int tamanVetor;
    //int r;
   // printf("Digite o tamanho do vetor: ");
   // scanf("%d", &tamanVetor);
   // printf("Digite o rand do vetor: ");
   // scanf("%d", &r);

    srand(time(NULL));
    int tamanho = 5;
    int v[tamanho], i;
   // int v[tamanVetor];
   // int *p;
   // int a;
    //p = 999999999;

    //if(p> 999999999){
      //  p = (int*) malloc( a* sizeof(int));

  //  }


/*
    for(i = 0 ; i < tamanho; i++) {
        v[i] = rand()%500;
    }



*/

    //[3] [2] [5] [30] [14] [22] [1] [6]
    // [0] [13] [16] [23] [9] [36] [47] [24]

    //[0] [13] [16] [23] [9] [36] [47] [24]
    //[99] [50] [30] [35] [41] [28] [0] [1]



    v[0] = 9;
    v[1] = 1;
    v[2] = 7;
    v[3] = 3;
    v[4] = 5;




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
    */


   // original(v, tamanVetor, r);


    printf("Vetor desordenado:\n");

    imprime(v,tamanho);

   selectionSort(v, tamanho); //feito
  //insertionSort(v, tamanho); //feito
    //bubbleSort(v, tamanho); //feito
  //shellSort(v, tamanho);  //feito

    //printf("\n\n Vetor ordenado INSERT: \n");

    //imprime(v, tamanVetor);
    //printf("\n*********************************\n");
  //original(v, tamanVetor, r);

   //original(v, tamanVetor, r);


   // printf("Vetor desordenado heap:\n");



   // QuickSort(v, 0, tamanho-1); //feito;

  // heapSort(v, tamanVetor);

     //printf("\n\n Vetor ordenado: \n");

    //imprime(v, tamanVetor);






   // printf("\nVetor desordenado MERGE:\n");

   //imprime(v,tamanVetor);


    //MergeSort(v, 0 , tamanVetor-1);

    printf("\n\n Vetor ordenado: \n");

    imprime(v, tamanho);



    printf("\ncontador de comparacao SELECT: %d\n", contadorComparacaoSelect);
     printf("\ncontador de trocas SELECT: %d\n", contadorTrocaSelect);

   //  printf("\ncontador de compara��o INSSERT: %llu", contadorComparacaoInsert);
   //  printf("\ncontador de trocas INSERT: %d", contadorTrocaInsert);

   //  printf("\ncontador de compara��o SHELL: %d", contadorComparacaoShell);
    // printf("\ncontador de trocas SHELL: %d", contadorTrocaShell);


   // printf("\ncontador de comparacao BUBBLE: %d", contadorComparacaoBubble);
   //  printf("\ncontador de trocas BUBBLE: %llu", contadorTrocaBubble);





 // printf("\ncontador de comparacao QUICK: %d", contadorComparacaoQuick);
  // printf("\ncontador de trocas QUICK: %d", contadorTrocaQuick);

   // printf("\ncontador de comparacao HEAP: %d", contadorComparacaoHeap);
 // printf("\ncontador de trocas HEAP: %d", contadorTrocaHeap);


  // printf("\ncontador de comparacao MERGE: %d", contadorComparacaoMerge);
 // printf("\ncontador de trocas MERGE: %d", contadorTrocaMerge);

   //printf("%d",p);

    return 0;
}

