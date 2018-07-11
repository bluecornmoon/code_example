#include <stdio.h>

typedef struct test
{
    int obj1;
    int obj2;
} test_t;

test_t array_t1[1024];
test_t array_t2[1024];
test_t array_t3[1025];

test_t (*test_array_ptr)[];

int main(void)
{
    test_array_ptr = &array_t1;

    test_t new_struct = {0, 0};
    (*test_array_ptr)[0] = new_struct;

    return 1;
}
