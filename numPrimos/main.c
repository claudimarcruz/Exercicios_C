#include <stdio.h>
#include <stdlib.h>


int numPrimo(int n) {
    int quant=0;
    for(int i=1; i<=n; i++) {
        if((n % i) == 0){
            quant++;
        }
    }
    if(quant == 2) {
        return 1;
    } else {
        for(int j=1; j<n; j++){
            if((n % j == 0)) {
                if(j != 1){
                    return j;
                }


        }
            }

    }


}
int main()
{
    int nr;
    int confere;
    printf("Digite um numero: ");
    scanf("%d", &nr);

    confere = numPrimo(nr);
    printf("%d", confere);


    return 0;
}
