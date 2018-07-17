#include <stdio.h>


int hammingWeight(unsigned int n)
{
    int count = 0;

    while (n) {
        if (n & 0x1) {
            count++;
        }
        n = n>>1;
    }

    return count;
}


int main (void)
{
    unsigned int number = 0;
    int count = 0;

    number = 11;

    count = hammingWeight(number);

    printf("hammingWeight: %d\n", count);

    return 1;
}
