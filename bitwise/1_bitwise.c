#include <stdio.h>

int main(void) {
    puts("AND運算：");
    printf("0 AND 0\t\t%d\n", 0 & 0);
    printf("0 AND 1\t\t%d\n", 0 & 1);
    printf("1 AND 0\t\t%d\n", 1 & 0);
    printf("1 AND 1\t\t%d\n\n", 1 & 1);

    puts("OR運算：");
    printf("0 OR 0\t\t%d\n", 0 | 0);
    printf("0 OR 1\t\t%d\n", 0 | 1);
    printf("1 OR 0\t\t%d\n", 1 | 0);
    printf("1 OR 1\t\t%d\n\n", 1 | 1);

    puts("XOR運算：");
    printf("0 XOR 0\t\t%d\n", 0 ^ 0);
    printf("0 XOR 1\t\t%d\n", 0 ^ 1);
    printf("1 XOR 0\t\t%d\n", 1 ^ 0);
    printf("1 XOR 1\t\t%d\n\n", 1 ^ 1);

    puts("NOT運算：");
    printf("NOT 0\t\t%d\n", !0);
    printf("NOT 1\t\t%d\n", !1);
    printf("NOT 0x1010\t\t%x\n\n", !0x1010);


    puts("~~~運算：");
    printf("~~~~~1010: \t\t%x\n", ~0x1010);

    return 0;
}
