//https://cplusplus.com/reference/cstdio/fread/
/* fread example: read an entire file */

#include <stdio.h>
#include <stdlib.h>

int main () {
  FILE * pFile;
  long lSize;
  //char * buffer;
int * buffer;
  size_t result;

  pFile = fopen ( "myfile.bin" , "rb" );
  if (pFile==NULL) {fputs ("File error",stderr); exit (1);}

  // obtain file size:
  fseek (pFile , 0 , SEEK_END);
  lSize = ftell (pFile);
  rewind (pFile);

  // allocate memory to contain the whole file:
  br = (char*) malloc (sizeof(char)*lSize);
  if (buffer == NULL) {fputs ("Memory error",stderr); exit (2);}

  // copy the file into the buffer:
  result = fread (buffer,1,lSize,pFile);
  if (result != lSize) {fputs ("Reading error",stderr); exit (3);}

  /* the whole file is now loaded in the memory buffer. */

for(int i=0; i<lSize/sizeof(int);i++)
printf("%d.  
// terminate
  fclose (pFile);
  free (buffer);
  return 0;
}
