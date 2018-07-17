#include <stdio.h>
#include <math.h>


int main (void)
{
    double result;

    result = pow(5, 2);

    printf("ans: %f\n", result);


    result = 0;
    for (int i = 0; i < 5 ; i++) {
        result += pow(i, 2);      
        printf("ans: %f\n", result);

    }
    

    return 1;
}
