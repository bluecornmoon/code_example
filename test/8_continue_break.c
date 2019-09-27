#include <stdio.h>


int main (void)
{
    int i = 0;

    printf("for break\n");
    for (i = 0; i < 5; i++) {

        if (i == 2)
            break;

        printf("%d ", i);
    }
    printf("\n");

    printf("for continue\n");
    for (i = 0; i < 5; i++) {

        if (i == 2)
            continue;

        printf("%d ", i);
    }
    printf("\n");

    i = 0;
    printf("while break\n");
    while (i < 5) {
        if (i == 2)
            break;

        printf("%d ", i);

        i++;
    }
    printf("\n");

    i = 0;
    printf("while continue\n");
    while (i < 5) {
        i++;
        if (i == 2)
            continue;

        printf("%d ", i);
    }
    printf("\n");


    printf("for for break\n");

    for (i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 2) {
                break;
            }
            printf("i: %d, j: %d\n", i, j);
        }
    }



    return 1;
}
