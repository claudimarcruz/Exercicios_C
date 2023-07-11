#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>

int QTD_NUMEROS_SORTEADOS = 5;
int QTD_NUMEROS_ESCOLHA = 3;

int sortearNumeroRandomico();
bool seNumeroJaSorteado(int lista[], int numero);

int main()
{
    setlocale(LC_ALL,"portuguese");

    int acertos = 0;
    int numerosRandomicos[QTD_NUMEROS_SORTEADOS];
    int numerosEscolhidos[QTD_NUMEROS_ESCOLHA];

    srand(time(NULL));

    printf ("#### LOTERIA ####");
    printf ("\n\n");

    printf("Escolha %d n�meros entre 1 e 10 (inclusos) para participar do sorteio.\n", QTD_NUMEROS_ESCOLHA);
    for (int i = 0; i < QTD_NUMEROS_ESCOLHA; i++) {
      printf ("Escolha um n�mero: ");
      scanf ("%d", &numerosEscolhidos[i]);
    }

    printf("\nOs n�meros rand�micos s�o:\n");
    for (int i = 0; i < QTD_NUMEROS_SORTEADOS; i++) {
      int randNum = sortearNumeroRandomico();
      while (seNumeroJaSorteado(numerosRandomicos, randNum)) {
        randNum = sortearNumeroRandomico();
      }
      numerosRandomicos[i] = randNum;
      printf("[%d] ", numerosRandomicos[i]);
    }

    for(int i = 0; i < QTD_NUMEROS_ESCOLHA; i++) {
      for(int j = 0; j < QTD_NUMEROS_SORTEADOS; j++) {
        if (numerosEscolhidos[i] == numerosRandomicos[j]) {
          acertos++;
          break;
        }
      }

      if (acertos == 0)
        break;
    }

    printf ("\n\n");

    if (acertos == 3) {
      printf ("\nGANHOU! Voc� acertou os 3 n�meros.");
    } else {
      printf("\nPERDEU!");
    }

    return(0);
}
    // Gerador de n�mero aleat�rio (range 1 - 10)
int sortearNumeroRandomico() {
  return (rand() % 11);

}

bool seNumeroJaSorteado(int lista[], int numero) {
  for(int i = 0; i < QTD_NUMEROS_SORTEADOS; i++) {
    if (lista[i] == numero) {
      return true;
    }
  }
  return false;
}



