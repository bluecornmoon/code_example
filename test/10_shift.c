#include <stdio.h>


int main (void)
{
    char a = 1;
    char b = 2;

    printf("data: %x\n", (a & 0xFF) << 8 | b);

    printf("data: %x\n", (a << 8));

    return 1;
}
