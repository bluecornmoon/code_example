#include <stdio.h>

#include "oak_fpga_upgrade.h"

int main ()
{
    FILE *pFile;
    int c;
    int i, ix;
    unsigned int val;
    unsigned char data[0x100000];

    pFile = fopen("fpga_image_o.h","r");

    ix = 1;
    while (!feof(pFile)) {
        if (fscanf(pFile, "%x", &val) == EOF) {
            printf("file read done, %d bytes\n", ix);
            //printf("problem scanning number.\n");
            goto out;
        }

        data[ix -1] = val;

        if ((c = fgetc(pFile)) == EOF) {
            printf("end fo file, %d bytes\n", ix);
            goto out;
        } else {
            if (c == ',') {
            } else {
                printf("file read done, %d bytes\n", ix);
                goto out;
            }
        }
        ix++;
    }


    out: 
        fclose (pFile);
		for (ix = 0; ix < sizeof(fpga_image); ix++) {
			if (data[ix] != fpga_image[ix]) {
                printf("number: %d\n", ix);
				printf("data: %x, fpga_image: %x\n", data[ix], fpga_image[ix]);
                return 0;
			}
		}


    return 0;
}
