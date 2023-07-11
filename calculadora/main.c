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
        printf("\nEscolha a operação: \n");
        printf("\n[1] Soma");
        printf("\n[2] Subtração");
        printf("\n[3] Multiplicação");
        printf("\n[4] Divisão");
        printf("\n[5] SAIR");
        printf("\n\nOpçao: ");
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
            printf("\nSubtração\n : %d\n", subtracao(x, y));
            break;



        case 3:

            printf("\nDigite o primeiro valor: ");
            scanf("%d", &x);
            printf("\nDigite o segundo valor: ");
            scanf("%d", &y);
            printf("\nMultiplicaçaõ : %d\n", multiplicacao(x, y));
            break;

        case 4:

            printf("\nDigite o primeiro valor: ");
            scanf("%d", &x);
            printf("\nDigite o segundo valor: ");
            scanf("%d", &y);
            printf("\nDivisão : %d\n", divisao(x, y));
            resto = x - ((divisao(x, y) * y));
            printf("\nResto: %d\n", resto);

            break;


        case 5:
            break;

        default:
            printf("\nNúmero inválido");





        }

    }while(op != 5);
    return 0;
}
