#include <stdio.h>

#include "oak_fpga_upgrade.h"

int ascii_to_hex (char c)
{
    int num = (int) c;

    if (num < 58 && num > 47) {
        return num -48;
    }
    
    if (num < 103 && num > 96) {
        return num -87;
    }
    return num;

}



int main ()
{
    FILE *fp;
    unsigned char c1, c2, c;
    int i = 0, n = 0, count = 0;
    unsigned char sum, final_hex[0x100000];
    int ix = 0;

    fp = fopen("fpga_image.h", "r");

    while (fgetc(fp) != EOF) {
        ++n;
    }
    if (feof(fp)) {
        printf("Total number of btyes read: %x\n", n);
    }

    fclose (fp);

    fp = fopen("fpga_image.h", "r");
    for (i = 0; i < n; i++) {
        c = fgetc(fp);

        if ((c < 58 && c > 47) || (c < 103 && c > 96)) {
            c1 = ascii_to_hex(c);
            c = fgetc(fp);
            if ((c < 58 && c > 47) || (c < 103 && c > 96)) {
                c2 = ascii_to_hex(c);
                sum = c1<<4 | c2;
                final_hex[count++] = sum;
            }
        }

    }
    fclose (fp);

    printf ("FPGA Image size: %x\n", (unsigned int)sizeof(fpga_image));


    for (ix = 0; ix < sizeof(fpga_image); ix++) {
        if (final_hex[ix] == fpga_image[ix]) {
            printf("final_hex: %x, fpga_image: %x\n", final_hex[ix], fpga_image[ix]);
            //return 0;
        }
    }

#ifdef get_arry
    for (i = 0; i < count; i++) {
        printf("%02x ", final_hex[i]);
    }
#endif

    return 0;
}
