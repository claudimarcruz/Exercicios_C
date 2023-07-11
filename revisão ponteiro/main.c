#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    x=10;
    y= &10;

    int *ponteiro;
    ponteiro = &x;


    printf("\n%d", *ponteiro);

    return 0;
}
