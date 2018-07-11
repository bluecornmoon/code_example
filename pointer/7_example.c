#include<stdio.h>

int main()
{
    int x=30, *y, *z;
    y=&x; /* Assume address of x is 500 and integer is 4 byte size */
    z=y;
    printf("x=%d %p, y=%p, z=%p\n", x, &x, y, z);
    //z++;

    *y++=*z++;
    x++;
    printf("x=%d %p, y=%p, z=%p\n", x, &x, y, z);

    return 0;
}
