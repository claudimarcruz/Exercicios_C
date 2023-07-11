#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c, s[50], sen[50];

    scanf("%c", &c);
    gets(s);
    gets(sen);

    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s", sen);
    return 0;
}
