#include <stdio.h>
#include <string.h>


int main ()
{
    char *s = "hello";
    char r_s_a[30];
    char *r_s = r_s_a;
    char **p_s = &s;
    int i = 0;

    printf("%s: size: %lu\n", s, strlen(s));
    printf("%c\n", s[0]);
    
    for (i = 0; i <= strlen(s); i++) {
        *r_s = s[strlen(s) - i];
        printf("string data: %c\n", s[strlen(s) - i]);
        printf("r_s data: %s -> %p\n", r_s, r_s);
        r_s++;
    }

    r_s = &r_s_a[0];

    printf("reverse string: %s -> %p\n", r_s+1, r_s);

    return 1;
}

