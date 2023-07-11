#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
	int dia;
	int mes;
	int ano;
} data;


int bissexto (int ano) {
	return (ano % 4 == 0) && ((ano % 100 != 0) || (ano % 400 == 0));
}


int dif_dias (  data inicio,  data fim) {

	int i, i_dias, f_dias, dif_anos=0, dias_bissexto;

	int dias_mes[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                           {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};


	i_dias = inicio.dia;
	dias_bissexto = bissexto (inicio.ano);
	for (i = inicio.mes - 1; i > 0; --i)
		i_dias = i_dias + dias_mes[dias_bissexto][i];


	f_dias = fim.dia;
	dias_bissexto = bissexto (fim.ano);
	for (i = fim.mes - 1; i > 0; --i)
		f_dias = f_dias + dias_mes[dias_bissexto][i];


	while (inicio.ano < fim.ano){
        dif_anos = dif_anos + 365 + bissexto(inicio.ano++);
	}


	return dif_anos - i_dias + f_dias;
}


int main()
{
    setlocale(LC_ALL,"portuguese");

	data data1, data2;

	printf("Data 1: dia/mês/ano\n");
	scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
	printf("\nData 2:dia/mês/ano\n");
	scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

	printf("\nA diferença entre as datas é: %d dias.\n\n", dif_dias(data1, data2));

	return 0;
}


