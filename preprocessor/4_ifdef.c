#include <stdio.h>

#define TRUE  1
#define FALSE 0


#define SUDI_2099_2029 1

#ifdef SUDI_2099_2029
/* SUDI_2099 */
#define PRINT_SUDI_2099_STS                         \
    printf("\nTAM 2099 is '%s'\n", sudi_2099 == TRUE ? "ON" : "OFF");
#define HARSA_SUDI                                  (4)
#endif


/*        
#ifndef HARSA_SUDI
#define HARSA_SUDI                                  (3)
#endif
*/


#ifdef SUDI_2099_2029
    int sudi_2099 = FALSE;
#endif


int main (void)
{

    printf("HARSA_SUDI: %d\n", HARSA_SUDI);
    PRINT_SUDI_2099_STS

    return 1;
}
