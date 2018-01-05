#include <stdio.h>


unsigned char xx[4];


int function_a(char buf)
{



    return 1;
}




int main(void) {

    char a[2][5] = {0};
    char b[5] = {0};


    a[0][0] = 10;
    b[1] = 10;
    printf("a %d\n", a[0][0]);
    printf("a %p\n", a);
    printf("a %p\n", &a[0][0]);
    printf("a size %d\n", (int)sizeof(a));
    printf("b %d\n", *(b+1));
    printf("b size %d\n", (int)sizeof(b));




    return 0;
}
