#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int inver(int n_inver){
    int centena, dezena, unidade;

     centena =  (int) n_inver/100;
     dezena = (int) (n_inver - centena*100)/10;
     unidade = n_inver -(centena*100)-(dezena*10);

     n_inver= unidade*100+dezena*10+centena;

    return n_inver;

}


int main()
{
    setlocale(LC_ALL,"portuguese");

    int numero, j;

    printf("Digite um número de 100 a 999:");
    scanf("%d",&numero);

    j=inver(numero);

    printf("O numero invertido será:%d",j);



    return 0;
}
