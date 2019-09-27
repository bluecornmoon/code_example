#include <stdio.h>
#include <string.h>


char *array_func (char * a)
{

    printf("a: %lu\n", sizeof(a));
    printf("a: %lu\n", strlen(a));

    return a;
}


int main(void)
{
    char *a = "abc";
    char *b;

    b = array_func(a);

    printf("%s\n", a);
    printf("%s\n", b);

    return 1;
}
