#include <stdio.h>


int hamming_d (int x, int y)
{
    int count = 0;
    int sum = 0;
    count = x ^ y;


    printf("count: %d\n", count);

    while (count) {
        if (count&0x1) {
            sum++;
        }
        count = count/2;
    }

    return sum;
}


int main (void)
{
    int x, y;
    int sum;

    x = 1;
    y = 4;

    sum = hamming_d(x, y);

    printf("sum: %d\n", sum);   

    return 1;
}
