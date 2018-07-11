#include <stdio.h>


int main(void)
{
    short a[5] = {0x1, 0x2, 0x3, 0x4, 0x5};


    printf("sizeof: %d\n", (int)sizeof(a));
    printf("%d\n",  *(int *)(a+2));

    return 1;
}
