#include <stdio.h>
#include <string.h>

#define I350_TEST_LOG "i350_test.LOG"
#define I350_FAIL "failed"

int main (void) 
{
#if 0
    fp = fopen(I350_TEST_LOG, "r");
    if (fp == NULL) {
        cterr('f',0, "Port %d can't open file i350_test_result.txt", port);
        return (retval);
    }

    while (!feof(fp)) {
        fgets(buf, sizeof(buf), fp);
        if (strstr(buf, I350_FAIL)) {
            printf("FAILED\n");
            break;
        } else {
            printf("PASSED\n");
            break;
        }
    }

    fclose(fp);
#endif


    return 1;
}
