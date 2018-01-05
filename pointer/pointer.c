#include <stdio.h>


int pointer_test(char *a, int *b, int *data)
{
    char *test;

    a += 1;
    printf("function a: %x\n", *a);

    *b = *a;



    printf("function data:%x\n", *data);

}


int main(void) {

    char a[5];
    int *b, c;
    unsigned int data; 
    
    data = 0x12345678;
    a[0] = data >> 24;
    a[1] = data >> 16;
    a[2] = data >> 8;
    a[3] = data;

    b = &c;


    printf("a[0] value: %x\n", a[0]);
    printf("a[1] value: %x\n", a[1]);
    printf("a[2] value: %x\n", a[2]);
    printf("a[3] value: %x\n", a[3]);
    printf("a size: %x\n", (int)sizeof(a));
    printf("data value: %x\n", data);


    pointer_test(&a[0], b, &data);

    printf("b value: %x\n", *b);

}



