#include <stdio.h>


#define FPGA_REG_0 0x9000
#define FPGA_REG_1 0x9001
#define FPGA_REG_2 0x9002
#define FPGA_REG_3 0x9003
#define FPGA_REG_4 0x9004

unsigned char array[4];


unsigned int tdm_rd (unsigned short addr, int size, unsigned int *buf)
{
    int ix, xx;
    char jx = 1; 
    //unsigned char *data_buf = (unsigned char *)buf;
    unsigned int data_buf;
    unsigned int result = 0, result_2 = 0;
    unsigned char *addr_p;

    addr_p = (unsigned char *)&addr;

    //printf("addr : %x\n", (unsigned char)addr);
    printf("addr_p : %x\n", *addr_p++);
    printf("addr_p : %x\n", *addr_p);


    for (ix = 0, xx = size-1; ix < size; ix++, xx--) {

        //*data_buf = (ix+1);
        //data_buf++;
    
        data_buf = (ix+1);
        data_buf <<= 8*xx;
        result_2 |= data_buf;

        //result <<=8;
        result |= (((unsigned int)jx++) << 8*xx);


    }


    *buf = result_2;

    printf("function result_2 : %08x\n", result_2);
    printf("function result : %08x\n", result);

    return result;
}

unsigned int tdm_wr (unsigned short addr, int size, unsigned int buf)
{
    unsigned char *addr_8, *data_8;

    addr_8 = (unsigned char *)&addr;

    printf("addr 1: %02x ", *addr_8++);
    printf("addr 2: %02x\n", *addr_8);

    data_8 = (unsigned char *)&buf;

    printf("data 1: %02x ", *data_8++);
    printf("data 2: %02x ", *data_8++);
    printf("data 3: %02x ", *data_8++);
    printf("data 4: %02x\n", *data_8);


    return 1;
}


int main(void)
{
    unsigned int data, result, data_2;

    result= tdm_rd(FPGA_REG_2, 4, &data);
 
    printf("Data : %08x\n", data);
    printf("result : %08x\n", result);
    printf("=============================================\n");


    tdm_wr(FPGA_REG_2, 4, 0x01234567);
    tdm_wr(FPGA_REG_2, 4, 0x01);

    data_2 = 0x12345678; 
    printf("Data 2: %08x\n", data_2 & 0xff);

}
        
        
        
        
        
        
