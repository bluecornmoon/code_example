#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main (void)
{
    char *string = "Hello";
    char *string_re;
    int i, j, len;
    char tmp;

    len = strlen(string);


    string_re = (char*)malloc(len * sizeof(char));

    for (i = 0; i < len; i++) {
        *(string_re + i) = *(string + len - 1 - i);
    }

    printf("%s\n", string_re);


    free(string_re);


    return 1;
}
