/* fprintf example */
#include <stdio.h>
#include <string.h>

int main ()
{
   FILE * pFile;
   int n;
   char name [100];

   pFile = fopen ("myfile.txt","w");
   for (n=0 ; n<3 ; n++)
   {
     puts ("Please, enter a name: ");
     fgets (name,20,stdin);
     name[strcspn(name, "\n")]=0;
     fprintf (pFile, "Name %d [%-10.10s]\n",n+1,name);
   }
   fclose (pFile);

   return 0;
}
