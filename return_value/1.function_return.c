#include <stdio.h>

char *foo(int count) {
    char *ret = malloc(count);
    if(!ret)
        return NULL;

    for (int i = 0; i < count; ++i) 
        ret[i] = i;

    return ret;
}

int main() {
    char *p = foo(10);
    if(p) {
        // do stuff with p
        free(p);
    }

    return 0;
}
