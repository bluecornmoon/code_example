#include <stdio.h>

int main(void) {

    printf("Hello test size\n");

    char a;
    short b;
    int c;
    long d;

    printf("Size: %u, %u, %u, %u\n", sizeof(a), 
           sizeof(b), sizeof(c), sizeof(d));

}
