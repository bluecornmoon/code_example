#include <stdio.h>


int main (void)
{
    int i, j;

    for (i = 0; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            printf("%d * %d = %d\t", i, j, i*j);
        }
        printf("\n");
    }
    return 1;
}
