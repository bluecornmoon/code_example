#include <stdio.h>

int main (void)
{
#define TEST_PAT 0x10
unsigned int x = 0xffff;


    printf("%x\n", TEST_PAT&x);

    return 0;
}
