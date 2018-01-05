#include <stdio.h>

typedef struct aa_ {
    volatile unsigned int a;
    volatile unsigned int b;
    volatile unsigned int c;
    volatile unsigned char pad[0x74];
    volatile unsigned int d;
    volatile unsigned int e;
} aa;

void main () {

    aa xx;
    aa *yy = &xx;
    int test;

    test = 0x5a;
    yy->a = test;

    printf("a %x: %x\n", (unsigned int)&yy->a, yy->a);
    printf("b %x, c %x\n", (unsigned int)&yy->b, (unsigned int)&yy->c);
    printf("d %x, e %x\n", (unsigned int)&yy->d, (unsigned int)&yy->e);

}
