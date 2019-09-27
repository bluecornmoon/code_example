#include <stdio.h>


int main (void) 
{
    int a = 0;
    int b = 0x10;
    int c = 0x100;


    printf("a: %x; b: %x; c: %x\n", ~a, ~b, ~c);

    return 1;
}
