#include <stdio.h>


char *array_func (char * a)
{
    char array[] = "Hello";

    a = array;
 
    printf("a: %s\n", a);

    return array;
}


int main(void)
{
    char *a;
    char *b;

    b = array_func(a);

    printf("%s\n", a);
    printf("%s\n", b);

    return 1;
}
