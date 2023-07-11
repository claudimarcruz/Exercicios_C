#include <stdio.h>
#include <stdlib.h>



    int main(){
 int n1=30, n2=44;
 int *p;
 int *z;
 p = &n1;
 z = &n2;
 *p = *z * 2;
 *z = *z + *p;
 printf("%d\n",
n1);
 printf("%d", n2);
 return 0;
}
