#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
        setlocale(LC_ALL,"portuguese");

        char s[30];    int tam,i,cont=0;

        printf("Digite uma palavra ou texto pequeno:\n");
        fgets(s,30,stdin);
        tam = strlen(s);
        printf("\na forma invertida:\n");

        for(i=tam -1;i >=0;i--){
        printf("%c",s[i]);

    }    for(i=tam -1;i >=0;i--){
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')){
        cont++;
        }}

       printf("\n");
    printf("O número de vogais é: %d \n",cont);
    system("pause");
     return 0;

}
