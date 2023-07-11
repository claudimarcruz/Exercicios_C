#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main ()

{
    setlocale(LC_ALL, "portuguese");

    char s[100] = {'a','b','c','d','e','f','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char j;
    int i, troca=3;

    printf("Informe uma frase:");
    gets(s);

    for( i=0; i<=100; i++){

        j= s[i];

        if(j>= 'a' && j<= 'z'){
            j = j + troca;
            if(j>'z')
            (j = j -'z' + 'a' -1);
            s[i] = j;
        }

    }


   printf("\nA frase codificada é:%s \n", s);

   return 0;
}









