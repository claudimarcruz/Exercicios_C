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
    printf("Divis�o: /\n");
    printf("Multiplica��o: *\n");
    printf("Subtra��o: -\n");
    printf("Adi��o: +\n");

    printf("\nEscolha a opera��o a ser realizada:");
    scanf("%c", &operacao);

             switch( operacao ){

                case '+':
                    printf("Digite o primeiro n�mero:");
                    scanf("%f", &n1);
                    printf("Digite o segundo n�mero:");
                    scanf("%f", &n2);
                    printf("Resultado: %.2f\n\n", n1 + n2);
                    break;

                case '-':
                        printf("Digite o primeiro n�mero:");
                        scanf("%f", &n1);
                        printf("Digite o segundo n�mero:");
                        scanf("%f", &n2);
                        printf("Resultado: %.2f\n\n", n1 - n2);
                        break;

                case '*':
                        printf("Digite o primeiro n�mero:");
                        scanf("%f", &n1);
                        printf("Digite o segundo n�mero:");
                        scanf("%f", &n2);
                        printf("Resultado: %.2f\n\n", n1 * n2);
                        break;

                case '/':
                        printf("Digite o primeiro n�mero:");
                        scanf("%f", &n1);
                        printf("Digite o segundo n�mero:");
                        scanf("%f", &n2);
                        if(n2 != 0)
                            printf("Resultado: %.2f\n\n", n1 / n2);
                        else
                            printf("N�o existe divis�o por 0\n\n");
                        break;

                default:
                        if(operacao != 0)
                            printf(" Operador inv�lido\n\n ");
                    }

    return 0;
}
