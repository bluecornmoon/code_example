#include <stdio.h>



int main ()
{
    int a = 0x12345678;
    int b = 0x1245678F;

    short c = 0;

    c = a >> 16;

    b &= 0xFFFF0000;
    b += c;

    printf("b: %x\n", b);
    printf("c: %x\n", c);


    return 1;
}

