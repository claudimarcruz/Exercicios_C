#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



    enum sede_copa{Brasil=1,Argentina,Canada,Inglaterra,Alemanha,China,India,Suecia,Finlandia,Turquia};



int main()
{
    srand(time(NULL));
    setlocale(LC_ALL,"portuguese");

    enum sede_copa p;
        p=rand()%10+1;

        switch(p){

        case Brasil:
        printf("Brasil foi sorteado!");
        break;

        case Argentina:
        printf(" Argentina  foi sorteada!");
        break;

        case Canada:
        printf("Canadá  foi sorteado!");
        break;

        case Inglaterra:
        printf("Inglaterra foi sorteada!");
        break;


        case Alemanha:
        printf("  Alemanha foi sorteada!");
        break;


        case China:
        printf(" China foi sorteada!");
        break;

        case India:
        printf(" Índia foi sorteada!");
        break;

        case Suecia:
        printf(" Suécia foi sorteada!");
        break;

        case Finlandia:
        printf(" Finlândia foi sorteada!");
        break;

        case Turquia:
        printf(" Turquia foi sorteada!");
        break;
        }

    return 0;
}
