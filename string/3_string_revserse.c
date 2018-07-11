#include<stdio.h>
#include<string.h>
 
int main() {
   char str[] = "Hello";
   char temp;
   int i, j = 0;
 
   //printf("\nEnter the string :");
   //gets(str);
 
   i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
 
   printf("\nReverse string is :%s\n", str);

   int len = strlen(str);
   
   for (i = 0; i < len/2; i++) {
       temp = str[i];
       str[i] = str[len - 1 - i];
       str[len-1-i] = temp;
   }
   printf("\nReverse string is :%s\n", str);

   return (0);
}
