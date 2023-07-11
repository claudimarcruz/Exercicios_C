#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[20];

    printf("Digite um string:");
    fgets(s);

    printf("%s",s);

    return 0;
}
