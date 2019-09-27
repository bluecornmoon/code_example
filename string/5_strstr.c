#include <stdio.h>
#include <string.h>



int main (void)
{
    char *a = "abc";
    char *b = "def";
    char *c = "b";
    char *d = "C998-PP";
    char *e = "C998-PPP";

    printf("a vs b: %s\n", strstr(a, b));
    printf("a vs c: %s\n", strstr(a, c));
    printf("d vs e: %s\n", strstr(d, e));



    return 1;
}
