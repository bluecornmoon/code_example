#include <stdio.h>

typedef struct test_ {
    char a;
    char b;
} test;

void main ()
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

}
