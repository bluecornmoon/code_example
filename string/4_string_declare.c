#include <stdio.h>
#include <string.h>


int main(void)
{
    char a[] = "Hello";
    char *b = "World";

    printf("strlen a: %lu, b: %lu\n", strlen(a), strlen(b));
    printf("sizeof a: %lu, b: %lu\n", sizeof(a), sizeof(b));

    printf("Address a: %p, %p\n", a, a+1);
    printf("Address b: %p, %p\n", b, b+1);

    //*(b + 2) = 'f';
    *(a + 2) = 'f';


    printf("a: %s\n", a);

    return 1;
}
