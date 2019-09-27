#include <stdio.h>
#include <string.h>


int main (void)
{
    char *a = "ab";
    char b[] = "ab";
    char *c = "ab\n";

    printf("sizeof a: %lu\n", sizeof(a));
    printf("strlen a: %lu\n", strlen(a));

    printf("sizeof b: %lu\n", sizeof(b));
    printf("strlen b: %lu\n", strlen(b));

    printf("sizeof c: %lu\n", sizeof(c));
    printf("strlen c: %lu\n", strlen(c));
}
