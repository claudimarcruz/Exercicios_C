#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese");

    char s1[5], s2[5], s3[5];



    printf("Digite o dia:");
    fgets(s1, 5, stdin);
    printf("Digite o m�s:");
    fgets(s2, 5, stdin);
    printf("Digite o ano:");
    fgets(s3, 5, stdin);

    strcat(s2,s3);


    printf("A data inserida �:%s/%s/%s",s1,s2,s3);



    return 0;
}
