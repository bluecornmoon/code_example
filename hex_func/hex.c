#include <stdio.h>

char atoh(char c)
{
    if (c >= '0'&&c <= '9') return(c - '0');
    if (c >= 'A'&&c <= 'F') return(c - ('A' - 10));
    if (c >= 'a'&&c <= 'f') return(c - ('a' - 10));
    return (-1);

}



int main(void)
{
 
    printf("atoh : %x\n", atoh('a'));
    printf("atoh : %c\n", 'a');


}
        
        
        
        
        
        
