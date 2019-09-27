#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
  char *str[5];
  char ch;
  FILE * pFile;
  int mcu_fw_size = 0;
  int ix = 0;
  char *pch;

  pFile = fopen ("my_data.h","r");

  while ((ch = fgetc(pFile)) != EOF) {
      if (ch == ',') {
          mcu_fw_size++;
      }
  }
  fclose (pFile);

  pFile = fopen ("my_data.h","r");

  while ((ch = fgetc(pFile)) != EOF) {
      if (ch == '{') {
          break;
      }
  }

  printf("mcu_fw_size: %x\n", mcu_fw_size);

  for (ix = 0; ix < mcu_fw_size; ix++) {
      str[ix] = calloc(10, sizeof(char));
  }

  for (ix = 0; ix < mcu_fw_size; ix++) {
      while ((ch = fgetc(pFile)) != EOF) {
          if (ch == '"') {
              break;
          }
      }
      fscanf(pFile, "%s", str[ix]);
      pch = strtok(str[ix], " \",");
      while (pch != NULL) {
          pch = strtok(NULL, " \",");
      }
  }
  

  fclose (pFile);

  printf ("%s\n", str[0]);
  printf ("%s\n", str[1]);
  printf ("%s\n", str[2]);
  printf ("%s\n", str[3]);
  return 0;
}
