#include <stdio.h>
#include <string.h>


int main (void)
{
    char string_data[50] = {0};
    unsigned int offset[] = 
    {0x058, 0x804, 0x904, 0x91C, 0x920, 0x938};

    sprintf(string_data, "devmem %x", offset[0]);

    printf("%s\n", string_data);


    return 1;

}
