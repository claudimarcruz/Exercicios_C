#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int conta_vogais(char s[100]){

    int contador=0,i;

    for(i=0; s[i]!='\0'; i++){
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            contador++;
        }

    }
    return contador;
}


int main()
{
    setlocale(LC_ALL,"portuguese");

    char s[100];

    printf("Digite uma frase:");
    fgets(s,100,stdin);

    printf("Total de vogais é:%d",conta_vogais(s));
    return 0;
}
