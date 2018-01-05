#include <stdio.h>

void show_mem_rep (char *start, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf(" %x", start[i]);
    }
    printf("\n");

}


int main ()
{
    unsigned int i = 1;
    char *c = (char*)&i;
    int j = 0x12345678;


    show_mem_rep((char*)&j, sizeof(j));

    if (*c)
        printf("Little endian\n");
    else 
        printf("Big Endian\n");



    return 1;


}
