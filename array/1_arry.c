#include <stdio.h>


/*
a 10
a 0x7fff5032bb2e
a 0x7fff5032bb2e
a size 10
b 10
b size 5
*/


unsigned char xx[4];


int function_a(char buf)
{
    return 1;
}




int main(void) {

    char a[2][5] = {0};
    char b[5] = {0};
    char c[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char *c_p;


    a[0][0] = 10;
    b[1] = 10;
    printf("a %d\n", a[0][0]);
    printf("a %p\n", a);
    printf("a %p\n", &a[0][0]);
    printf("a size %d\n", (int)sizeof(a));
    printf("b %d\n", *(b+1));
    printf("b size %d\n", (int)sizeof(b));

    c_p = &(c+1)[2];
    printf("c: %d\n", *c_p); 




    return 0;
}
