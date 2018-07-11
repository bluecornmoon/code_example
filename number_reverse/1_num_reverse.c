#include <stdio.h>


int reverse(int x) {
    long long val = 0;
    do 
    {
        val = val * 10 + x % 10;
        x /= 10;
    } while (x);

    return val;
}

int main ()
{
    int a = 123;

    printf("number: %d, reverse: %d\n", a, reverse(a));

}
