#include <stdio.h>


int main (void)
{
    char numbers[] = {41,33,17,80,61,5,55};
    int num_index = 0;
    int i = 0, num_size, min_index = 0;
    char min_one = numbers[0];

    num_size = sizeof(numbers); 

    printf("Array size: %d\n", num_size);

    while (num_index != num_size) {
        min_one = numbers[num_index];
        for (i = num_index; i < num_size; i++) {
            if (min_one > numbers[i]) {
                min_one = numbers[i];
                min_index = i;
            }
        }
        printf("min_index: %d, num_index: %d, Min one: %d\n", min_index, num_index, min_one);
        numbers[min_index] = numbers[num_index];
        numbers[num_index] = min_one;
        num_index++;
    }

    for (i = 0; i < num_size; i++)
        printf("%d ", numbers[i]);

    return 0;
}
