#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    char media_final(float media){



    if(media>0.0 && media < 4.9){

        return 'D';
        }
    else if (media >5.0 && media<6.9){

         return 'C';
    }
    else if (media >7.0 && media<8.9){

        return 'B';
    }
    else {

        return 'A';
    }

    }


int main()
{
    setlocale(LC_ALL,"portuguese");

    float media;


    printf("Insira uma nota:");
    scanf("%f", &media);

    printf("Conceito:%c",media_final(media));


    return 0;
}
