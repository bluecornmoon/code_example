#include <stdio.h>
#include <string.h>



int main ()
{
    char *a = "Hello world";
    char *b = "!!!!!!!";
    char c[32];

    strcat(c, a);
    strcat(c, b);

    printf("%s\n", c);

}
