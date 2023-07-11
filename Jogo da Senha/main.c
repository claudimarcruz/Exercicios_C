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
    printf("> O sistema ir� gerar uma senha de 4 d�gitos.\n");
    printf("\n> Voc� tem 10 tentativas para acerta-l�.\n");
    printf("\n> A cada tentativa o sistema ir� lhe informar o resultado, de acordo com a seguinte legenda:\n");
    printf("\n\t-1  n�mero n�o faz parte da senha! ");
    printf("\n\t 0  n�mero se encontra na senha, mas na posi��o errada!");
    printf("\n\t 1  n�mero est� certo e na posi��o correta!\n\n");
    printf("\n> Vamos come�ar!!!\n");
    printf("\n> ");
    system("pause");

    int qtdMaxTentativas = 10;
    int vetorSorteado[4], vetorInformado[4],i,tentativa=0,totalPontos=0;



     for(i=0;i<4;i++){
            vetorSorteado[i]= aleatorio(10);



     }

    do {

      printf("\n_______________________________________________\n");

      printf("\nSua %d�tentativa:\t\n",tentativa +1);

      printf("\n");

    for (i = 0; i < 4; i++) {
        printf("Digite o %d� n�mero: ", i + 1);



        int valAux;
        scanf("%d", &valAux);


        while (valAux < 0 || valAux > 9) {
          printf("Valor inv�lido! Digite o %d� n�mero novamente: ", i + 1);
          scanf("%d", &valAux);
        }

        vetorInformado[i] = valAux;
      }


      printf("\nVoc� digitou:\t");
      for(i=0;i<4;i++){
          printf("%d\t", vetorInformado[i]);
      }


      totalPontos = calcular_pont(vetorSorteado, vetorInformado);


      tentativa++;

    }

    while(totalPontos != 4 && tentativa < qtdMaxTentativas);


    if (totalPontos == 4) {
        printf("\n\nVoc� acertou!!!\n");
      }


    else{
      printf("\n\nVoc� perdeu! A senha correta �:\t");
      for(i=0;i<4;i++){
        printf("%d  ",vetorSorteado[i]);

      }
      printf("\n");

    }

    return 0;
}




