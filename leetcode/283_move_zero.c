#include <stdio.h>
#include <time.h>


int main()
{
    char num[10] = {0, 1, 0, 3, 12};
    int number_size = 5, i;
    int index = 0;

    for (i = 0; i < number_size; i++) {
        if (num[i] != 0) {
            num[index++] = num[i];
        }
    }
    for (i = index; i < number_size; i++) {
        num[i] = 0;
    }

    for (i = 0; i < number_size; i++) {
        printf(" %d ", num[i]);
    }
    printf("\n");


    return 1;
}



/* [0 1 0 3 12] -> [0 0 1 3 12] */
#if 0
int main()
{
    clock_t start, end;
    char num[10] = {0, 1, 0, 3, 12};
    char num_after[10] = {0};
    char zero_counter = 0;
    int number_size = 5, i;

    start = clock();

    for (i = 0; i < number_size; i++) {
        if (num[i] == 0) {
            zero_counter++;
        }
    }

    for (i = 0; i < number_size; i++) {
        if (num[i] != 0) {
            num_after[zero_counter + i] = num[i]; 
        }
    }

    printf("zero_counter: %d\n", zero_counter);

    for (i = 0; i < number_size; i++) {
        printf(" %d ", num[i]);
    }
    printf("\n");
    
    // Record the end time
    end = clock();

    double diff = end - start; // ms
    printf(" %f  ms\n" , diff);
    printf(" %f  sec\n", diff / CLOCKS_PER_SEC );


    return 1;

}
#endif
