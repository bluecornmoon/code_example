#include<stdio.h>

int main()
{
    int y=128;
    const int x=y;
    printf("%d\n", x);

    x = 200;
    printf("%d\n", x);

    return 0;
}
