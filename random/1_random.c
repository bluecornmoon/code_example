#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, j = 0;
    int a[50];
    int rand_data = 0;
    int data_size = 20;

    for(i = 0; i < data_size; i++) {
        do_again:
        rand_data = rand() % 50;
        //printf("rand_data: %d\n", rand_data);

        for (j = 0; j < i; j++) {
            if (a[j] == rand_data) {
                goto do_again;
            } else {
                a[i] = rand_data;
            }
        }
    }

    for (i = 0; i < data_size; i++)
        printf("a[i]: %d\n", a[i]);

    return 1;
}
