#include <stdio.h>
#include <string.h>


int main (void)
{
    char *tname = "";

    printf("sizeof: %lu\n", sizeof(tname));
    printf("strlen: %lu\n", strlen(tname));
    printf("address: %p\n", tname);

    tname = "Hello World\n";

    printf("%s", tname);
    printf("sizeof: %lu\n", sizeof(tname));
    printf("strlen: %lu\n", strlen(tname));
    printf("address: %p\n", tname);

    return 1;

}
