#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int aleatorio(int max){
    return rand()%max ;
}

int calcular_pont( int vetorSorteado[4], int vetorInformado[4]){
    int pontuacao[4], i,j;


   for (i=0;i<4;i++){
        if(vetorInformado[i]==vetorSorteado[i]){
            pontuacao[i]=1;

           continue;

        }


        int existe = 0;
        for (j=0;j<4;j++){
            if(vetorInformado[i]==vetorSorteado[j]) {
                existe++;
                break;
            }
        }

        if(existe == 0) {
            pontuacao[i]=-1;
        } else {
            pontuacao[i]=0;
        }
    }


    int totalPontos = 0;
    printf("\n\nResultado:    \t");
    for(i=0;i<4;i++){
        totalPontos += pontuacao[i];
        printf("%d\t", pontuacao[i]);
    }


  return totalPontos;
}

int main()
{



    setlocale(LC_ALL,"portuguese");



    srand(time(NULL));


    printf("\n\t\t____________ JOGO DA SENHA ____________\n\n");
    printf("> O sistema irá gerar uma senha de 4 dígitos.\n");
    printf("\n> Você tem 10 tentativas para acerta-lá.\n");
    printf("\n> A cada tentativa o sistema irá lhe informar o resultado, de acordo com a seguinte legenda:\n");
    printf("\n\t-1  número não faz parte da senha! ");
    printf("\n\t 0  número se encontra na senha, mas na posição errada!");
    printf("\n\t 1  número está certo e na posição correta!\n\n");
    printf("\n> Vamos começar!!!\n");
    printf("\n> ");
    system("pause");

    int qtdMaxTentativas = 10;
    int vetorSorteado[4], vetorInformado[4],i,tentativa=0,totalPontos=0;



     for(i=0;i<4;i++){
            vetorSorteado[i]= aleatorio(10);



     }

    do {

      printf("\n_______________________________________________\n");

      printf("\nSua %dºtentativa:\t\n",tentativa +1);

      printf("\n");

    for (i = 0; i < 4; i++) {
        printf("Digite o %dº número: ", i + 1);



        int valAux;
        scanf("%d", &valAux);


        while (valAux < 0 || valAux > 9) {
          printf("Valor inválido! Digite o %dº número novamente: ", i + 1);
          scanf("%d", &valAux);
        }

        vetorInformado[i] = valAux;
      }


      printf("\nVocê digitou:\t");
      for(i=0;i<4;i++){
          printf("%d\t", vetorInformado[i]);
      }


      totalPontos = calcular_pont(vetorSorteado, vetorInformado);


      tentativa++;

    }

    while(totalPontos != 4 && tentativa < qtdMaxTentativas);


    if (totalPontos == 4) {
        printf("\n\nVocê acertou!!!\n");
      }


    else{
      printf("\n\nVocê perdeu! A senha correta é:\t");
      for(i=0;i<4;i++){
        printf("%d  ",vetorSorteado[i]);

      }
      printf("\n");

    }

    return 0;
}




