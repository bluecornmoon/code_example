#include <stdio.h>


void cannot_change (int *x, int *z) 
{
    x = z;

    printf ("value a: %p\n", x);

}

void can_change (int **x, int *z) 
{
    *x = z;

    printf ("value a: %p\n", x);

}

int main()
{
    int c = 1;
    int d = 2;
    int e = 3;
    int *a = &c;
    int *b = &d;
    int *f = &e;
    int **pp = &a;


    printf("a: %p\n", a);
    printf("b: %p\n", b);
    printf("f: %p\n", f);

    a = b;
    printf("a: %p\n", a);

    cannot_change(a, f);
    printf("cannot a: %p\n", a);

    can_change(pp, f);
    printf("can a: %p\n", a);



    return 1;

}
