#include <stdio.h>


/* can be used for arranging memory for structure members */
/* very next to the end of other structure members. */
//#pragma pack(1)

struct example_struct {
    int a;
    char b;
    short c;
  
} st_1;

struct example_struct_2 {
    char b;
    short c;
    int a;
  
} st_2;

struct example_struct_3 {
    char b;
    short c;
    long d;
    int a;
  
} st_3;

typedef struct example_struct_4 {
    char b;
    char c[10];
    char d[2];
  
} st_4;

union example_union{
    int a;
    char b;
    long c;
};

int main()
{
    struct example_struct m_struct;
    union example_union m_union;

    //struct
    printf("size: %d\n", (int)sizeof(st_1));
    printf("size: %d\n", (int)sizeof(st_2));
    printf("size: %d\n", (int)sizeof(st_3));
    printf("size: %d\n", (int)sizeof(st_4));
   

    //union
    printf("size: %d\n", (int)sizeof(m_union));
}
