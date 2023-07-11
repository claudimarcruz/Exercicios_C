#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int fatorialDuplo(int n){
        if(n==1){
            return 1;
        }
        else{
            return n*fatorialDuplo(n-2);
        }}
int main()
{
    setlocale(LC_ALL,"portuguese");

    int n;

    printf("Informe um número:");
    scanf("%d",&n);


    printf("\nSeu fatorial duplo é:%d\n",fatorialDuplo(n));

    return 0;
}

