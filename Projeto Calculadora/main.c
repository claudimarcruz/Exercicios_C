#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2;
    char operacao;

    printf("Calculadora\n\n");

    printf("Menu\n");
    printf("Divisão: /\n");
    printf("Multiplicação: *\n");
    printf("Subtração: -\n");
    printf("Adição: +\n");

    printf("\nEscolha a operação a ser realizada:");
    scanf("%c", &operacao);

             switch( operacao ){

                case '+':
                    printf("Digite o primeiro número:");
                    scanf("%f", &n1);
                    printf("Digite o segundo número:");
                    scanf("%f", &n2);
                    printf("Resultado: %.2f\n\n", n1 + n2);
                    break;

                case '-':
                        printf("Digite o primeiro número:");
                        scanf("%f", &n1);
                        printf("Digite o segundo número:");
                        scanf("%f", &n2);
                        printf("Resultado: %.2f\n\n", n1 - n2);
                        break;

                case '*':
                        printf("Digite o primeiro número:");
                        scanf("%f", &n1);
                        printf("Digite o segundo número:");
                        scanf("%f", &n2);
                        printf("Resultado: %.2f\n\n", n1 * n2);
                        break;

                case '/':
                        printf("Digite o primeiro número:");
                        scanf("%f", &n1);
                        printf("Digite o segundo número:");
                        scanf("%f", &n2);
                        if(n2 != 0)
                            printf("Resultado: %.2f\n\n", n1 / n2);
                        else
                            printf("Não existe divisão por 0\n\n");
                        break;

                default:
                        if(operacao != 0)
                            printf(" Operador inválido\n\n ");
                    }

    return 0;
}
