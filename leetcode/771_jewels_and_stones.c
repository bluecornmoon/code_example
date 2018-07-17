#include <stdio.h>
#include <string.h>


int numJewelsInStones(char* J, char* S) 
{
    int J_len = strlen(J);
    int S_len = strlen(S);
    int count = 0, i = 0, x = 0;

    for (i = 0; i < J_len; i++) {
        for (x = 0; x < S_len; x++) {
            if (S[x] == J[i]) {
                count++;
            }
        }
    }

    rintf("Jlen: %d, Slen: %d\n", J_len, S_len);
    return count; 
}

int main(void)
{
    char *J = "aA";
    char *S = "aAAbbbaaabbbb";
    int counter = 0;
    
    counter = numJewelsInStones(J, S); 

    printf("counter: %d\n", counter);

    return 1;
}
