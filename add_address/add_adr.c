#include <stdio.h>

/*
5, ffffffff
0x7fff52120b38, 0x7fff52120b39
*/

typedef struct test_ {
    char a;
    char b;
} test;

int main ()
{
    test ker;
    char *address;
    int shift;

    ker.a = 5;
    ker.b = 0xff;
    shift = 1;

    address = &ker.a + shift;

    printf("%x, %x\n", ker.a, *address);
    printf("%p, %p\n", &ker.a, address);

    return 0;

}
