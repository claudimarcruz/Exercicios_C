#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{

int matricula;
char nome[20];
int codigoDisciplina;
float nota1;
float nota2;
}aluno;

int main()
{
   setlocale(LC_ALL,"portuguese");

   int i;
   aluno a[2];

   for(i=0;i<2;i++){

        printf("\nInforme a matr�cula do %d� aluno:",i+1);
        scanf("%d",&a[i].matricula);
        fflush(stdin);
        printf("Informe o nome do %d� aluno:",i+1);
        gets(a[i].nome);
        printf("Informe o c�digo da disciplina do %d� aluno:",i+1);
        scanf("%d",&a[i].codigoDisciplina);
        printf("Informe a primeira nota do %d� aluno:",i+1);
        scanf("%f",&a[i].nota1);
        printf("Informe a segunda nota do %d� aluno:",i+1);
        scanf("%f",&a[i].nota2);
   }


        for(i=0;i<2;i++){
            float mediaPonderada= (a[i].nota1*1 + a[i].nota2*2)/3;
            printf("\nMatr�cula do %d� aluno:%d",i+1,a[i].matricula);
            printf("\nNome do %d� aluno:%s",i+1,a[i].nome);
            printf("\nC�digo da disciplina do %d� aluno:%d",i+1,a[i].codigoDisciplina);
            printf("\nM�dia final do %d� aluno:%f\n",i+1,mediaPonderada);

    }

    return 0;
}
