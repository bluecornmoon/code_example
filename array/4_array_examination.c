#include <stdio.h>


void aarray(int *b, int size, int *data_result)
{
    int size_re = size;

    printf("size: %d\n", size);
    while (--size) {
        printf("size number: %d   ", size);
        printf("a array: %d\n", b[size]);
    }

    printf("\n\n");

    size = size_re;
    while (size--) {
        printf("size number: %d   ", size);
        printf("a array: %d\n", b[size]);
    }
}



int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int result = 0;

    aarray(a, sizeof(a)/sizeof(a[0]), &result);

    return 1;
}
