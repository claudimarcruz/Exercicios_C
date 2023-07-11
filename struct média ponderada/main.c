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

        printf("\nInforme a matrícula do %dº aluno:",i+1);
        scanf("%d",&a[i].matricula);
        fflush(stdin);
        printf("Informe o nome do %dº aluno:",i+1);
        gets(a[i].nome);
        printf("Informe o código da disciplina do %dº aluno:",i+1);
        scanf("%d",&a[i].codigoDisciplina);
        printf("Informe a primeira nota do %dº aluno:",i+1);
        scanf("%f",&a[i].nota1);
        printf("Informe a segunda nota do %dº aluno:",i+1);
        scanf("%f",&a[i].nota2);
   }


        for(i=0;i<2;i++){
            float mediaPonderada= (a[i].nota1*1 + a[i].nota2*2)/3;
            printf("\nMatrícula do %dº aluno:%d",i+1,a[i].matricula);
            printf("\nNome do %dº aluno:%s",i+1,a[i].nome);
            printf("\nCódigo da disciplina do %dº aluno:%d",i+1,a[i].codigoDisciplina);
            printf("\nMédia final do %dº aluno:%f\n",i+1,mediaPonderada);

    }

    return 0;
}
