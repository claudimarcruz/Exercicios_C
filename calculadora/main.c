#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int x, int y) {
    return x + y;
}

int subtracao(int x, int y) {
    return x - y;
}

int multiplicacao(int x, int y) {
    return x * y;
}

int divisao(int x, int y) {
    return x / y;
}


int main()
{

    setlocale(LC_ALL, "portuguese");

    int op, x, y, resto;

    do {

        printf("\n_____________________________\n");
        printf("\nEscolha a opera��o: \n");
        printf("\n[1] Soma");
        printf("\n[2] Subtra��o");
        printf("\n[3] Multiplica��o");
        printf("\n[4] Divis�o");
        printf("\n[5] SAIR");
        printf("\n\nOp�ao: ");
        scanf("%d", &op);




        switch(op) {

        case 1:

            printf("\nDigite o primeiro valor: ");
            scanf("%d", &x);
            printf("\nDigite o segundo valor: ");
            scanf("%d", &y);
            printf("\nSoma : %d\n", soma(x, y));
            break;

        case 2:

            printf("\nDigite o primeiro valor: ");
            scanf("%d", &x);
            printf("\nDigite o segundo valor: ");
            scanf("%d", &y);
            printf("\nSubtra��o\n : %d\n", subtracao(x, y));
            break;



        case 3:

            printf("\nDigite o primeiro valor: ");
            scanf("%d", &x);
            printf("\nDigite o segundo valor: ");
            scanf("%d", &y);
            printf("\nMultiplica�a� : %d\n", multiplicacao(x, y));
            break;

        case 4:

            printf("\nDigite o primeiro valor: ");
            scanf("%d", &x);
            printf("\nDigite o segundo valor: ");
            scanf("%d", &y);
            printf("\nDivis�o : %d\n", divisao(x, y));
            resto = x - ((divisao(x, y) * y));
            printf("\nResto: %d\n", resto);

            break;


        case 5:
            break;

        default:
            printf("\nN�mero inv�lido");





        }

    }while(op != 5);
    return 0;
}
