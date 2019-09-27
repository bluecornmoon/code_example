#include <stdio.h>


int main (void)
{
    char a[5] = {1, 2, 3, 4, 5};
    char *b = a;

    printf("0: %d\n", b[0]);
    printf("-1: %d\n", b[-1]);


    return 1;
}
