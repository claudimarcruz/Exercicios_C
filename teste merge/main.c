

#include<stdlib.h>
 #include <stdio.h>
 #include <time.h>
 #include <stdlib.h>
 #define TAMANHO 8

 void merge(int vetor[], int inicio, int meio, int fim);
 void mergeSort(int vetor[], int inicio, int meio);
 int troc, comp = 0; // Contador do aleatorio

 int aleatorio() {
 	int vetor[TAMANHO]; //vetor com tamanho definido
 	clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
 	srand(time(NULL)); //Cria uma semente para numeros aleatorios
 	tempoInicial = clock(); //inicia contagem do tempo
 	/*for (int i = 0; i < TAMANHO; i++) {
 		vetor[i] = rand() % 100; //Atribui um inteiro aleatorio entre 0 e 9
 		}
*/
/*
 		vetor[0] = 58;
 		vetor[1] = 47;
 		vetor[2] = 51;
 		vetor[3] = 20;
 		vetor[4] = 2;
 		vetor[5] = 45;
 		vetor[6] = 4;
 		vetor[7] = 66;
 		//17c  8t
*/

        vetor[0] = 36;
 		vetor[1] = 59;
 		vetor[2] = 58;
 		vetor[3] = 55;
 		vetor[4] = 46;
 		vetor[5] = 1;
 		vetor[6] = 38;
 		vetor[7] = 1;
 		//15c  11t
 		for (int i = 0; i < TAMANHO; i++) {
 		printf("%d\t", vetor[i]);
 	}

        printf("\n");

 //Chama a fucao passando o vetor como parametro
 	mergeSort(vetor, 0, TAMANHO - 1);

 //Mostra valores do vetor ordenado
 	for (int i = 0; i < TAMANHO; i++) {
 		//printf("%d\t", vetor[i]);
 	}
 	printf("\n");
 	printf("\nComparacao: %d", comp);
    printf("\nTroca: %d", troc);
    printf("\n");
 	tempoFinal = clock(); //finaliza contagem do tempo
 	//calcula e mostra o tempo total de execucao
 	printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);

 	mergeSort(vetor, 0, TAMANHO - 1);
 	printf("\n");

 		for (int i = 0; i < TAMANHO; i++) {
 		printf("%d\t", vetor[i]);
 	}
 }

 int crescente() {
    int vetor[TAMANHO]; //vetor com tamanho definido
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = i; //Atribui um inteiro aleatorio entre 0 e 9
    }
    printf("\n");
    //Chama a fucao passando o vetor como parametro
    mergeSort(vetor, 0, TAMANHO - 1);
    //Mostra valores do vetor ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
 	printf("\nComparacao: %d", comp);
    printf("\nTroca: %d", troc);
    printf("\n");
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
}

int decrescente() {
    int vetor[TAMANHO]; //vetor com tamanho definido
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = TAMANHO - i; //Atribui um inteiro aleatorio entre 0 e 9
    }
     for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    //Chama a fucao passando o vetor como parametro
    mergeSort(vetor, 0, TAMANHO - 1);
    //Mostra valores do vetor ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
  	printf("\n");
 	printf("\nComparacao: %d", comp);
    printf("\nTroca: %d", troc);
    printf("\n");
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
}


 void merge(int vetor[], int inicio, int meio, int fim) {
 int i, j, k;
 int n1 = meio - inicio + 1;
 int n2 = fim - meio;
 int L[n1], R[n2];
 for (i = 0; i < n1; i++)
 L[i] = vetor[inicio + i];
 for (j = 0; j < n2; j++)
 R[j] = vetor[meio + 1 + j];
 i = 0;
 j = 0;
 k = inicio;
 while (i < n1 && j < n2) {
 if (L[i] <= R[j]) {
 vetor[k] = L[i];
 i++;
 }
 else {
 vetor[k] = R[j];
 j++;
 troc = troc + 1;
 }
 comp = comp + 1;
k++;

 }
 while (i < n1) {
 vetor[k] = L[i];
 i++;
 k++;
 }

 while (j < n2) {
 vetor[k] = R[j];
 j++;
 k++;
 }
 }

 void mergeSort(int vetor[], int inicio, int fim) {
 if (inicio < fim) {
 int m = inicio + (fim - inicio) / 2;
 mergeSort(vetor, inicio, m);
 mergeSort(vetor, m + 1, fim);
 merge(vetor, inicio, m, fim);
 }
 }

 int main() {
 	int opcao = 0;
 	printf("1 para aleatorio\t 2 para crescente\t 3 para descrescente\t\n");
 	scanf("%d", &opcao);
 	switch (opcao) {
		case 1:
		aleatorio();
		break;
		case 2:
 		crescente();
		break;
		case 3:
		decrescente();
		break;
	}
 	return 0;
 }

/*

 #include<stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 8
void merge(int vetor[], int inicio, int meio, int fim);
void mergeSort(int vetor[], int inicio, int meio);
int comp = 0, troca = 0;

void aleatorio() {
    int vetor[TAMANHO]; //vetor com tamanho definido
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    srand(time(NULL)); //Cria uma semente para numeros aleatorios
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 70; //Atribui um inteiro aleatorio entre 0 e 5
    }
    //Mostra valores do vetor nao ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    //Chama a fucao passando o vetor como parametro
    mergeSort(vetor, 0, TAMANHO - 1);
    //Mostra valores do vetor ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }

    printf("\n");
    printf("Comparações: %d\nTrocas: %d\n", comp, troca);
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
}

void crescente() {
    int vetor[TAMANHO]; //vetor com tamanho definido
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = i; //Atribui um inteiro aleatorio entre 0 e 5
    }
    //Mostra valores do vetor nao ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    //Chama a fucao passando o vetor como parametro
    mergeSort(vetor, 0, TAMANHO - 1);
    //Mostra valores do vetor ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    printf("Comparações: %d\nTrocas: %d\n", comp, troca);
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
}

void decrescente() {
    int vetor[TAMANHO]; //vetor com tamanho definido
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = TAMANHO - i; //Atribui um inteiro aleatorio entre 0 e 5
    }
    //Mostra valores do vetor nao ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    //Chama a fucao passando o vetor como parametro
    mergeSort(vetor, 0, TAMANHO - 1);
    //Mostra valores do vetor ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    printf("Comparações: %d\nTrocas: %d\n", comp, troca);
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
}

void merge(int vetor[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = vetor[inicio + i];
    for (j = 0; j < n2; j++)
        R[j] = vetor[meio + 1 + j];
    i = 0;
    j = 0;
    k = inicio;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vetor[k] = L[i];
            i++;
        }
        else {
            vetor[k] = R[j];
            j++;
            troca = troca + 1;
        }
		comp = comp + 1;
        k++;
    }
    while (i < n1) {
        vetor[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vetor[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int m = inicio + (fim - inicio) / 2;
        mergeSort(vetor, inicio, m);
        mergeSort(vetor, m + 1, fim);
        merge(vetor, inicio, m, fim);
    }
}

void main() {

	int opcao = 0;
	printf("---------- Menu ----------");
	printf("\n| 1 - Aleatório  |\n| 2 - Crescente  |\n| 3 - Decrescente|");
	printf("\n| Escolha uma opção: ");
	scanf("%d", &opcao);

	switch (opcao) {
		case 1 :
		printf("\n----- Aleatório -----\n");
		aleatorio();
		break;

		case 2 :
		printf("\n----- Crescente -----\n");
		crescente();
		break;

		case 3 :
		printf("\n----- Decrescente -----\n");
		decrescente();
		break;

		default :
		printf("\n----- Valor Inválido! -----");
	}
}
*/
