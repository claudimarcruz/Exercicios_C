#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    typedef struct{

    int matricula;
    char nome[20];
    float nota_1_avaliacao;
    float nota_2_avaliacao;
    float nota_3_avaliacao;
    }aluno;
int main()
{
    setlocale(LC_ALL,"portuguese");

    int i,idMaior_nota_3,idMaior_media,idMenor_media;
    float maiorNota3=0.0,maiorMedia=0.0, menorMedia=0.0;
    aluno a[5];

    for(i=0;i<5;i++){

        printf("\nInforme o nome do %dº aluno:",i+1);
        gets(a[i].nome);
        printf("Informe a matrícula do %dº aluno:",i+1);
        scanf("%d",&a[i].matricula);
        fflush(stdin);
        printf("Informe a nota da primeira avaliação do %dº aluno:",i+1);
        scanf("%f",&a[i].nota_1_avaliacao);
        printf("Informe a nota da segunda avaliação do %dº aluno:",i+1);
        scanf("%f",&a[i].nota_2_avaliacao);
        printf("Informe a nota da terceira avaliação do %dº aluno:",i+1);
        scanf("%f",&a[i].nota_3_avaliacao);
        fflush(stdin);

    }
       for(i=0;i<5;i++){
            if(a[i].nota_3_avaliacao>maiorNota3){
                maiorNota3=a[i].nota_3_avaliacao;
                idMaior_nota_3=i;

            }
                   }


        printf("\nMaior nota da terceira avaliação:\n");
        printf("Aluno:%s",a[idMaior_nota_3].nome);
        printf("\nMatrícula:%d\n",a[idMaior_nota_3].matricula);


        for(i=0;i<5;i++){
            float media= (a[i].nota_1_avaliacao + a[i].nota_2_avaliacao + a[i].nota_3_avaliacao)/3;
            if(media>maiorMedia){
                maiorMedia=media;
                idMaior_media=i;
            }}

        printf("\nMaior média geral:\n");
        printf("Aluno:%s",a[idMaior_media].nome);
        printf("\nMatrícula:%d\n",a[idMaior_media].matricula);

        for(i=0;i<5;i++){
            float media= (a[i].nota_1_avaliacao + a[i].nota_2_avaliacao + a[i].nota_3_avaliacao)/3;
            if(i==0){
                menorMedia=media;
                idMenor_media=i;
            }else if(media<menorMedia){
                menorMedia=media;
                idMenor_media=i;
            }}

        printf("\nMenor média geral:\n");
        printf("Aluno:%s",a[idMenor_media].nome);
        printf("\nMatrícula:%d\n",a[idMenor_media].matricula);







    return 0;
}
