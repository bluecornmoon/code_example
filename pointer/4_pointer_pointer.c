#include <stdio.h>


int x = 8;

void modify (int *v) 
{
    printf("v addr: %p\n", v);
    v = &x;
    printf("v addr: %p\n", v);
}

void modify2 (int **p)
{
    *p = &x;
}

int main (void)
{
    int i = 5, *ptr;
    ptr = &i;

    printf("x addr: %p\n", &x);

    printf("Before: *ptr: %p, *ptr=%d\n", ptr, *ptr);
    modify(ptr);
    printf("After: *ptr: %p, *ptr=%d\n", ptr, *ptr);
    modify2(&ptr);
    printf("After: *ptr: %p, *ptr=%d\n", ptr, *ptr);

    return 0;
}
