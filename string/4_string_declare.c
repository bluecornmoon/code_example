#include <stdio.h>
#include <string.h>


int main(void)
{
    char a[] = "Hello";
    char *b = "World";

    char c[] = "123";
    char *d = "123";

    printf("strlen a: %lu, b: %lu\n", strlen(a), strlen(b));
    printf("sizeof a: %lu, b: %lu\n", sizeof(a), sizeof(b));

    printf("Address a: %p, %p\n", a, a+1);
    printf("Address b: %p, %p\n", b, b+1);

    //*(b + 2) = 'f';
    *(a + 2) = 'f';


    printf("a: %s\n", a);


    printf("c: %c\n", *c);
    printf("*c+1: %c\n", *c+1);
    printf("*(c+1): %c\n", *(c+1));
    printf("sizeof: %lu\n", sizeof(c));

    printf("d: %c\n", *d);
    printf("*d+1: %c\n", *d+1);
    printf("*(d+1): %c\n", *(d+1));
    printf("sizeof: %lu\n", sizeof(d));


    return 1;
}
