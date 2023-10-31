//https://cplusplus.com/reference/cstdio/fwrite/
/* fwrite example : write buffer */

#include <stdio.h>

int main ()
{
  FILE * pFile;
  int buffer[] = {0x78, 0x79, 0x7a};
  pFile = fopen ("myfile.bin", "wb");
  fwrite (buffer , sizeof(int), sizeof(buffer)/sizeof(int), pFile);
  fclose (pFile);
  return 0;
}

