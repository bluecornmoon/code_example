#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** s = malloc(sizeof(char*) * n);
    int i;
    char temp[1024];
    
    for (i = 0; i < n; i++) {
        if ((i+1)%3 && (i+1)%5) {
            sprintf(temp, "%d", i+1);
            s[i] = malloc(strlen(temp) + 1);
            strcpy(s[i], temp);
        } else if ((i+1)%15 == 0) {
            s[i] = malloc(strlen("FizzBuzz") + 1);
            strcpy(s[i], "FizzBuzz");
        } else if ((i+1)%3 == 0) {
            s[i] = malloc(strlen("Fizz") + 1);
            strcpy(s[i], "Fizz");
        } else if ((i+1)%5 == 0) {
            s[i] = malloc(strlen("Buzz") + 1);
            strcpy(s[i], "Buzz");
        }
        
    }
    
    *returnSize = n;
    return s;
}


int main (void)
{
    char **data;
    int n = 15;
    int *returnSize;

    data = fizzBuzz(n, returnSize);

    return 1;
}
