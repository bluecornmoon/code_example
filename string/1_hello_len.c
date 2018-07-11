#include <stdio.h>
#include <string.h>

#define HELLO_NAME "GOODDAY"
#define WORLD_NAME "HELLO-WORLD"

int main ()
{
    char name[30];
    char *p_name = name;

    printf("hello: %d, strlen %d, world: %d, %d\n", (int)sizeof(HELLO_NAME), strlen(HELLO_NAME),
            (int)sizeof(WORLD_NAME), strlen(WORLD_NAME));

    p_name = HELLO_NAME;
    if (strncmp(p_name, "GOODDAY", sizeof(HELLO_NAME)) == 0) {
            printf("%s\n", HELLO_NAME);
    } 

    p_name = WORLD_NAME;
    if (strncmp(p_name, "HELLO-WORLD", sizeof(WORLD_NAME)) == 0) {
            printf("%s\n", WORLD_NAME);
    } 

    return 0;


}
