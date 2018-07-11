#include <stdio.h>


int main () 
{
    int nums[2][3]  =  { {16, 18, 20}, {25, 26, 27} };
    int array[5];

    printf("num[0][0]: %d\n", *(*nums + 0));
    printf("num[0][1]: %d\n", *(*nums + 1));
    printf("num[0][2]: %d\n", *(*nums + 2));

    printf("num[0][0]: %p\n", nums);
    printf("num[0][1]: %p\n", nums + 1);
    printf("num[0][2]: %p\n", nums + 2);
    
    printf("num[0][0]: %p\n", &nums[0][0]);
    printf("num[0][1]: %p\n", &nums[0][1]);
    printf("num[0][2]: %p\n", &nums[0][2]);

    printf("num[1][0]: %d\n", *(*(nums + 1) + 0));
    printf("num[1][1]: %d\n", *(*(nums + 1) + 1));
    printf("num[1][2]: %d\n", *(*(nums + 1) + 2));

    printf("num[0][0]: %p\n", (&nums + 1));
    printf("num[0][1]: %p\n", (&nums + 1) + 1);
    printf("num[0][2]: %p\n", (&nums + 1) + 2);


    /* If %p is new to you, you can use %d as well */
    printf("array=%p : &array=%p\n", array, &array); 
    printf("array+1 = %p : &array + 1 = %p\n", array+1, &array+1);


}
