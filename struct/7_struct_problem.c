#include <stdio.h>
#include <string.h>


struct data {
    char a[256];
};

int main ()
{
    struct data data_t;
    struct data *data_p = &data_t;
    int i;

printf("data_t: %p\n", &data_t);
printf("data_p: %p\n", data_p);
    
    for (i = 0; i < 100; i++) {
        data_p->a[i] = i;
    }

printf("data_p->a: %d\n", data_p->a[50]);


    return 1;
}
