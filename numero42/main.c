#include <stdio.h>
#include <stdlib.h>

int main()
{

      int  n[70], i;

      n[0]=0;

    for (i =1; i<70; i++)

        if (i%3 ==0){
            n[i]=10;

        }
        else{
            n[i]=(i*10);

        }

         for (i =0; i<70; i++){
            printf("%d \n", n[i]);
         }

    return 0;
}
