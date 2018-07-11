#include <stdio.h>


int main(void) 
{
    char b[5] = {1, 2, 3, 4, 5};
    char *a = b;

    *(a+1) = 10;

    printf("Sizeof: %lu\n", sizeof(a));

    printf("a: %d, a+1:%d, a+1: %d\n", b[0], b[1], b[2]);

}
