#include <stdio.h>

struct example_struct{
  int a;
  char b;
};

union example_union{
  int a;
  char b;
};

int main()
{
   struct example_struct m_struct;
   union example_union m_union;

   //struct
   m_struct.a = 3;
   printf("m_struct.a=%d\n", m_struct.a);
   m_struct.b = 'c';
   printf("m_struct.a=%d, m_struct.b=%d\n\n", m_struct.a, m_struct.b);
   

   //union
   m_union.a = 3;
   printf("m_union.a=%d\n", m_union.a);
   m_union.b = 10;
   printf("m_union.a=%d, m_union.b=%d\n", m_union.a, m_union.b);
}
