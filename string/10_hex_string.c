#include <stdio.h>

int main (void) {

    unsigned char a[10] = {0};
    unsigned char b[10] = {0};

    a[0] = 0x68;
    a[1] = 0x3b;
    a[2] = 0x78;
    a[3] = 0xf6;
    a[4] = 0x00;
    a[5] = 0x80;

    sprintf(b, "%s", a);

    printf("%c %c %c %c %c %c\n", b[0], b[1], b[2], b[3], b[4], b[5]);

    printf("%x %x %x %x %x %x\n", b[0], b[1], b[2], b[3], b[4], b[5]);


    return 1;

}
