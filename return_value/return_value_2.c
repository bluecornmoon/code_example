#include <stdio.h>
#include <string.h>


#define FPGA_REG_0 0x9000
#define FPGA_REG_1 0x9001
#define FPGA_REG_2 0x9002
#define FPGA_REG_3 0x9003
#define FPGA_REG_4 0x9004

unsigned char array[4];


unsigned int tdm_rd_wr (unsigned short addr, int size, unsigned int *buf, unsigned int *buf_2)
{
    int ix, xx;
    char jx = 1; 
    unsigned char *data_buf;
    unsigned int result = 0, result_2 = 0;
    unsigned char *addr_p;
    unsigned char  value = 0x12;
    unsigned char  value_2 = 0x34;
    //unsigned char  *value_p = &value;

    addr_p = (unsigned char *)&addr;

    printf("addr_p : %x\n", *addr_p++);
    printf("addr_p : %x\n", *addr_p);


    data_buf = (unsigned char *)buf;
    *data_buf = value;
    data_buf++;
    *data_buf = value_2;

    printf("Function value: %x\n", *data_buf); 

    memset (buf_2, 0xa4, sizeof(*buf_2));
    printf("Function data 2: %x, size: %x, size*: %x\n", *buf_2, (int)sizeof(buf_2), (int)sizeof(*buf_2)); 

    return result;
}

int main(void)
{
    unsigned int datadata;
    unsigned int *data = &datadata;
    unsigned int result, data_2;
    unsigned char *data_1b;

    data_1b = (unsigned char *)data;

    data_2 = 0x123456;


    result= tdm_rd_wr(FPGA_REG_2, 4, data, &data_2);
 
    printf("result : %08x\n", result);
    printf("Read data: %08x\n",*data & 0xff00); 
    printf("Read data 1b: %08x\n",*data_1b++); 
    printf("Read data 1b: %08x\n",*data_1b); 
    printf("=============================================\n");

}
        
        
        
        
        
        
