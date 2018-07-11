#include <stdio.h>

typedef struct aa_ {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned char pad[0x74];
    unsigned int d;
    unsigned int e;
} aa;


typedef struct bb_ {
    unsigned char pad[20];
    unsigned char pad_1[20];
    unsigned char pad_2[18];
    unsigned int e;
} bb;

int main () {

    aa xx;
    aa *yy = &xx;
    int test;

    test = 0x5a;
    yy->a = test;

    printf("a %x: %x\n", (unsigned int)&yy->a, yy->a);
    printf("b %x, c %x\n", (unsigned int)&yy->b, (unsigned int)&yy->c);
    printf("d %x, e %x\n", (unsigned int)&yy->d, (unsigned int)&yy->e);

    printf("Size of: %d\n", sizeof(bb));

    return 1;

}
