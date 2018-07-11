#include <stdio.h>


int main () 
{
    int a = 10;
    const int *b = &a;

    printf("a: %d\n", *b);
    a = 10 + 1;
    printf("a: %d\n", *b);


}
