#include <stdio.h>


int pointer_test(int *data, char a, char *b)
{
    char *test;


    printf("function data:%x\n", *data);
    printf("function a:%x\n", a);
    printf("function b:%x\n", *b);

}


int main(void) {

    int a, c;
    int *b = &c;
    volatile unsigned int data; 
    char *e = NULL;
    
    data = 0x12345678;
    a = 0x012345678;
    c = 0x012345678;
    

    pointer_test((int *)&data, (char)a, (char *)b);

    printf("size a: %x, b: %x, e:%x\n", (int)sizeof(a), (int)sizeof(b), (int)sizeof(e));


}



