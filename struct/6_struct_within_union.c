#include <stdio.h>


struct TYPEA {
  char data[30]; // or whatever
};

struct TYPEB {
  double x, y; // or whatever
};

struct some_info {
  int type; // set accordingly
  union {
    struct TYPEA a;
    struct TYPEB b;
  } data; // access with some_info_object.data.a or some_info_object.data.b
};


int main ()
{
    printf("size type A: %d\n", (int)sizeof(struct TYPEA));
    printf("size type B: %d\n", (int)sizeof(struct TYPEB));
    printf("size some info: %d\n", (int)sizeof(struct some_info));

}
