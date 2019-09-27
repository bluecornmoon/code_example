#include <stdio.h>

int main (void) 
{
    int count = 10;
    int a = 0;
    int b = 0;
    for (int i = 0; i < count; i++) {
        a++;
        printf("a: %d\n", a);

        printf("b: %d\n", b++);

    }


    return 1;
}
