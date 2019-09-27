#include <stdio.h>


int a(void) 
{
    int result = 0;

    return result++;
}

int b(void)
{

    static int result = 0;
    return result++;
}

int main (void)
{

    printf("%d %d\n", a(), b());
    printf("%d %d\n", a(), b());
    printf("%d %d\n", a(), b());

    return 1;
}
