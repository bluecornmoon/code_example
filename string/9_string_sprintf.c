#include <stdio.h>
#include <string.h>

int main (void)
{
    char a[5] = {11, 22, 33, 44, 55};
    char b[5] = {0};
    FILE *fp;
    int x = 0, y = 0;

    for (x= 0; x < 5; x++) {
        printf("a[%d]: %x\n", x, a[x]);
        y += sprintf(&b[y], "%x", a[x]);
        printf("y: %d\n", y);
    }

    printf("b done: %s\n", b);

    printf("y: %d\n", y);
    sprintf(&b[y], ".bin");
    
    fp = fopen(b, "wb+");
    fwrite(a, 1, (10), fp);
    fclose(fp);

}
